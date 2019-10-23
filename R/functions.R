loadModule("multinet",TRUE)

print.Rcpp_RMLNetwork <- function(x, ...) {
    show(x)
    invisible(x)
}

str.Rcpp_RMLNetwork <- function(object, ...) {
    show(object)
    NULL
}

# Basic layer-by-layer statistics
summary.Rcpp_RMLNetwork <- function(object, ...) {
    mlnet.layers <- as.list(object)
    mlnet.table <- as.data.frame(matrix(0,length(mlnet.layers),9))
    dimnames(mlnet.table) <- list(names(mlnet.layers),c("n","m","dir","nc","slc","dens","cc","apl","dia"))
    if (num_layers_ml(object)>0) {
        for (i in 1 : length(mlnet.layers)) {
            mlnet.table[i,1] = vcount(mlnet.layers[[i]])
            mlnet.table[i,2] = ecount(mlnet.layers[[i]])
            mlnet.table[i,3] = is.directed(mlnet.layers[[i]])
            mlnet.table[i,4] = count_components(mlnet.layers[[i]])
            mlnet.table[i,5] = max(components(mlnet.layers[[i]])$csize)
            mlnet.table[i,6] = graph.density(mlnet.layers[[i]])
            mlnet.table[i,7] = transitivity(mlnet.layers[[i]])
            mlnet.table[i,8] = average.path.length(mlnet.layers[[i]])
            mlnet.table[i,9] = diameter(mlnet.layers[[i]])
        }
    }
    mlnet.table
}

#

values2graphics <- function(values, output = "color") {
    
    if (!output %in% c("color","shape")) {
        stop("wrong parameter: output")
    }
    
    if (is.data.frame(values)) {
        values <- values[[1]]
    }
    types <- as.factor(values)
    num_types <- length(levels(types))
    color_map = brewer.pal(num_types, "Paired")
    color_map[types]
    
    if ((output == "shape") & num_types>5) {
        warning("only 5 distinct shapes available: some shapes have been repeated")
    }
    
    l = vector("list")
    l[["legend.text"]] = levels(types)
    l[["legend.pch"]] = 21
    
    if (output == "color") {
        l[["legend.col"]] = color_map[1:num_types]
        l[["color"]] = color_map[types]
    }
    
    if (output == "shape") {
        l[["legend.pch"]] = ((1:num_types)-1) %% 5 + 21
        l[["shape"]] = (as.numeric(types)-1) %% 5 + 21
    }
    
    l
}

# (Rudimentary) plotting function.
    
plot.Rcpp_RMLNetwork <- function(x,
layout=NULL, grid=NULL, mai=.1,
layers=NULL,
vertex.shape=21, vertex.cex=1, vertex.size=vertex.cex, vertex.color=NULL,
vertex.labels=NULL, vertex.labels.pos=3, vertex.labels.offset=.5, vertex.labels.cex=1,
edge.type=1, edge.width=1, edge.color=1,
edge.arrow.length=0.1, edge.arrow.angle=20,
legend.x=NULL, legend.y=NULL, legend.pch=20,
legend.cex=.5, legend.inset=c(0, 0),
com=NULL, com.cex=1, ...) {
    
    if (min(vertex.shape)<21 | max(vertex.shape)>25) {
        stop("vertex shapes not supported; only values between 21 and 25 allowed")
    }
    
    if (is.null(layout)) {
        layout <- layout_multiforce_ml(x)
    }
    
    if (!is.null(layers)) {
        layer_map <- match(layers_ml(x), layers) - 1
        layout <- cbind(layout[,1:4], z=layer_map[layout$z+1])
    }
    else
    {
        layers <- layers_ml(x)
    }
    num_layers <- length(layers)
    
    num.cols = num_layers
    num.rows = 1
    if (!is.null(grid)) {
        if (!length(grid)==2) stop("argument grid must have two elements")
        num.rows = grid[1]
        num.cols = grid[2]
    }
    
    x_coord <- function(xyz_coord) {
        xyz_coord$x+xyz_coord$z%%num.cols*width
    }
   
   y_coord <- function(xyz_coord) {
       xyz_coord$y+(num.rows-1-xyz_coord$z %/% num.cols)*height
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
    
    
    # color palette
    if (is.null(vertex.color)) {
        if (num_layers > 9) {
            layer_palette <- rainbow(num_layers)
        }
        else {
            layer_palette <- brewer.pal(max(3, num_layers), "Set1")
        }
    }
    else layer_palette=1
    
    # draw legend
    if (!is.null(legend.x))
    {
        legend(legend.x, legend.y, legend=layers, col = layer_palette, bty = "n", pch=legend.pch,
        cex = legend.cex, inset = legend.inset)
    }
    
    # draw communities
    if (!is.null(com) && nrow(com)>0) {
        num.com <- max(com$cid)+1
        if (num.com > 12) {
            palette <- rainbow(num.com, alpha = .4)
        }
        else {
            palette <- adjustcolor(brewer.pal(num.com, "Set3"), alpha.f = .4)
        }
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
        c.list <- get_community_list_ml(com,x);
        lapply(c.list, draw.areas)
    }
    
    # draw edges
    e <- edges_idx_ml(x)
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

    layout <- layout[complete.cases(layout), ]
    # draw nodes
    if (is.null(vertex.color)) {
        vertex.color=layer_palette[layout$z+1]
    }
    points(x_coord(layout),y_coord(layout),pch=vertex.shape,col=vertex.color,cex=vertex.cex,bg=vertex.color)

    # draw labels
    if (is.null(vertex.labels)) vertex.labels=layout$actor
    
    text(x_coord(layout),y_coord(layout),labels=vertex.labels, pos=vertex.labels.pos, offset=vertex.labels.offset, cex=vertex.labels.cex)
}
