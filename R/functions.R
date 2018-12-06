loadModule("multinet",TRUE)

# Casting of (a portion of) a multilayer network into an igraph (multi)graph. This is done by creating an intermediate graphml file and loading it as an igraph file

as.igraph.Rcpp_RMLNetwork <- function (x, layers=NULL, merge.actors=TRUE, all.actors=FALSE, ...) {
    if (is.null(layers)) {
        layers <- layers.ml(x)
    }
    temp_f <- tempfile()
    write.ml(x, temp_f, format = "graphml", layers, ",", merge.actors, all.actors)
    g <- read.graph(temp_f, format = "graphml")
    unlink(temp_f)
    g
}


# A function to convert the network into a list of igraph objects
as.list.Rcpp_RMLNetwork <- function(x, ...) {
    layer.names = sort(layers.ml(x))
    layers <- vector("list",num.layers.ml(x)+1)
    layers[[1]] <- as.igraph(x)
    names(layers)[1] <- "_flat_"
    if (num.layers.ml(x)>0) {
        for (i in 1 : num.layers.ml(x)) {
            layers[[i+1]] <- as.igraph(x,layer.names[i])
            bad.vs<-V(layers[[i+1]])[degree(layers[[i+1]]) == 0]
            # remove isolated nodes
            layers[[i+1]] <-delete.vertices(layers[[i+1]], bad.vs)
            names(layers)[i+1] <- layer.names[i]
        }
    }
    layers
}

#
add.igraph.layer.ml <- function(mlnetwork, g, name)
{
    if (is.null(vertex_attr(g)$name))
    {
        stop("igraph object must have a vertex attribute 'name' with vertex names")
    }
    
    add.layers.ml(mlnetwork, name, is.directed(g))
    
    add.actors.ml(mlnetwork, vertex_attr(g)$name)
    
    vertices = data.frame(actor=vertex_attr(g)$name, layer=name)
    add.vertices.ml(mlnetwork, vertices)
    
    for (attr in names(vertex_attr(g)))
    {
        if (is.numeric(vertex_attr(g)[[attr]]))
        {
            add.attributes.ml(mlnetwork, attributes=attr, type="numeric", target="vertex", layer=name)
        }
        if (is.character(vertex_attr(g)[[attr]]))
        {
            add.attributes.ml(mlnetwork, attributes=attr, type="string", target="vertex", layer=name)
        }
        set.values.ml(mlnetwork, attr, vertices=vertices, values=vertex_attr(g)[[attr]])
    }
    
    
    edges = data.frame(
    actor1=get.edgelist(g)[,1], layer1=name,
    actor2=get.edgelist(g)[,2], layer2=name)
    
    add.edges.ml(mlnetwork, edges)
    
    for (attr in names(edge_attr(g)))
    {
        if (is.numeric(edge_attr(g)[[attr]]))
        {
            add.attributes.ml(mlnetwork, attributes=attr, type="numeric", target="edge", layer=name)
        }
        if (is.character(edge_attr(g)[[attr]]))
        {
            add.attributes.ml(mlnetwork, attributes=attr, type="string", target="edge", layer=name)
        }
        set.values.ml(mlnetwork, attr, edges=edges, values=edge_attr(g)[[attr]])
    }
}

# Basic layer-by-layer statistics
summary.Rcpp_RMLNetwork <- function(object, ...) {
    mlnet.layers <- as.list(object)
    mlnet.table <- as.data.frame(matrix(0,length(mlnet.layers),8))
    dimnames(mlnet.table) <- list(names(mlnet.layers),c("n","m","dir","nc","dens","cc","apl","dia"))
    if (num.layers.ml(object)>0) {
        for (i in 1 : length(mlnet.layers)) {
            mlnet.table[i,1] = vcount(mlnet.layers[[i]])
            mlnet.table[i,2] = ecount(mlnet.layers[[i]])
            mlnet.table[i,3] = is.directed(mlnet.layers[[i]])
            mlnet.table[i,4] = count_components(mlnet.layers[[i]])
            mlnet.table[i,5] = graph.density(mlnet.layers[[i]])
            mlnet.table[i,6] = transitivity(mlnet.layers[[i]])
            mlnet.table[i,7] = average.path.length(mlnet.layers[[i]])
            mlnet.table[i,8] = diameter(mlnet.layers[[i]])
        }
    }
    mlnet.table
}

# (Rudimentary) plotting function.

    
plot.Rcpp_RMLNetwork <- function(x,
layout=NULL, grid=NULL, mai=.1,
vertex.shape=16, vertex.cex=1, vertex.color=NULL,
vertex.labels=NULL, vertex.labels.pos=3, vertex.labels.offset=.5, vertex.labels.cex=1,
edge.type=1, edge.width=1, edge.color=1,
edge.arrow.length=0.1, edge.arrow.angle=20,
com=NULL, com.cex=1, ...) {
    
    num.cols = num.layers.ml(x)
    num.rows = 1
    if (!is.null(grid)) {
        if (!length(grid)==2) stop("argument grid must have two elements")
        num.rows = grid[1]
        num.cols = grid[2]
    }
    
    if (is.null(layout)) {
        layout <- layout.multiforce.ml(x)
    }
    
    x_coord <- function(xyz_coord) {
        xyz_coord$x+xyz_coord$z%%num.cols*width
    }
   
   y_coord <- function(xyz_coord) {
       xyz_coord$y+(num.rows-1-xyz_coord$z%/%num.cols)*height
   }
   
    #
    x.min = min(layout$x)
    y.min = min(layout$y)
    x.max = max(layout$x)
    y.max = max(layout$y)
    
    width = x.max-x.min + mai*(x.max-x.min);
    x.min = x.min - mai/2*(x.max-x.min)
    height = y.max-y.min + mai*(y.max-y.min);
    y.min = y.min - mai/2*(y.max-y.min)
    
plot(NA,type="n",xlim=c(x.min,x.min+width*num.cols),ylim=c(y.min,y.min+height*num.rows),xaxt="n",yaxt="n",bty="n",xlab="",ylab="")

    # draw grid
    segments((0:num.cols*width)+x.min,y.min,(0:num.cols*width)+x.min,y.min+height*num.rows)
    segments(x.min,(0:num.rows*height)+y.min,x.min+width*num.cols,(0:num.rows*height)+y.min)
    
    # draw communities
    if (!is.null(com) && nrow(com)>0) {
        num.com <- max(com$cid)+1
        palette = rainbow(num.com, alpha=.5)
        draw.areas <- function(d) {
            xc <- x_coord(layout[d$aid,])
            yc <- y_coord(layout[d$aid,])
            # add some margin around nodes
            os <- par()$cxy*com.cex
            xc <- c(xc+os[1]/2,xc+os[1]/2,xc-os[1]/2,xc-os[1]/2)
            yc <- c(yc+os[2]/2,yc-os[2]/2,yc+os[2]/2,yc-os[2]/2)
                
            extreme.points = chull(xc,yc)
        xspline(xc[extreme.points],yc[extreme.points],open=F,shape=1,border=NA,col=palette[d$cid+1])
        }
        c.list <- get.community.list.ml(com,x);
        lapply(c.list, draw.areas)
    }
    
    # draw edges
    e <- edges.idx.ml(x)
    draw_edge <- function(d) {
        if (d['dir']==0) {
        segments(x_coord(layout[d['from'],]),
        y_coord(layout[d['from'],]),x_coord(layout[d['to'],]),y_coord(layout[d['to'],]), lty=edge.type, lwd=edge.width, col=edge.color)
        }
        if (d['dir']==1) {
        arrows(x_coord(layout[d['from'],]),
        y_coord(layout[d['from'],]),x_coord(layout[d['to'],]),y_coord(layout[d['to'],]), length=edge.arrow.length, angle=edge.arrow.angle, lty=edge.type, lwd=edge.width, col=edge.color)
        }
    }
    apply(e,1,draw_edge)

# draw nodes

if (is.null(vertex.color)) vertex.color=layout$z+1
points(x_coord(layout),y_coord(layout),pch=vertex.shape,col=vertex.color,cex=vertex.cex)

# draw labels
    if (is.null(vertex.labels)) vertex.labels=layout$actor
text(x_coord(layout),y_coord(layout),labels=vertex.labels, pos=vertex.labels.pos, offset=vertex.labels.offset, cex=vertex.labels.cex)
}

