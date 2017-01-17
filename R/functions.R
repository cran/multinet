loadModule("multinet",TRUE)

ml.aucs <- function() {
	read.ml(system.file("extdata", "aucs.mpx", package="multinet"),"AUCS")
}

ml.toy <- function() {
	read.ml(system.file("extdata", "book.mpx", package="multinet"),"toy")
}

ml.florentine <- function() {
	read.ml(system.file("extdata", "florentine_families.mpx", package="multinet"),"Florentine families")
}

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

plot.Rcpp_RMLNetwork <- function(x, method="multi", layers=NULL, layer.colors=NULL, grid=NULL, layout=NULL, layout.par=list(), layout.independent=TRUE, communities=NULL,...) {
    if (is.null(layers)) {
        layers <- layers.ml(x)
    }
    
    temp_g <- as.igraph(x, layers)
    
    if (is.null(layer.colors)) {
        layer.colors <- rainbow(length(layers))
    }
    edge_colors <- rep(1,length(E(temp_g)))
    col_index <- 1
    for (layer in layers) {
        edge_colors[E(temp_g)$e_type==layer] <- layer.colors[col_index]
        col_index <- col_index+1
    }
    
    if (is.null(layout)) {
        layout <- layout.fruchterman.reingold
        l <- do.call(layout,c(list(temp_g),layout.par))
    }
    else {
        l <- layout
    }
       
    if (method=="multi") {
 	    if (is.null(communities)) {
    		igraph.groups = list();
    	}
    	else {
        	igraph.groups = get.groups.ml(communities);
    	}
        plot(temp_g,vertex.label=V(temp_g)$id,edge.color=edge_colors,layout=l,mark.groups=igraph.groups,...)
    }
    if (method=="slice") {
        if (is.null(grid)) {
            grid = c(1,num.layers.ml(x))
        }
        par(mfrow=grid)
        col_index <- 1
        for (layer in layers) {
            temp_g <- as.igraph(x,layer)
            vertex_color <- rep("SkyBlue2",length(V(temp_g)))
            vertex_color[get.vertex.attribute(temp_g,paste("layer:",layer))=="F"] <- "white"
            if (layout.independent) {
                l <- do.call(layout,c(list(temp_g),layout.par))
            }
            if (is.null(communities)) {
    			igraph.groups = list();
    		}
    		else {
	        	igraph.groups = get.groups.ml(communities[communities[,2]==layer,]);
    		}
        
           	par(mar=c(0,0,0,0))
            plot(temp_g,vertex.label=V(temp_g)$id,vertex.color=vertex_color,edge.color=layer.colors[col_index],layout=l,mark.groups=igraph.groups,...)
            col_index <- col_index+1
            box()
        }
        par(mfrow=c(1,1))
    }
}

get.groups.ml <- function(communities) {
	community.ids <- unique(unlist(communities[,3]));
	groups <- vector("list",length(community.ids))
	j <- 1; 
	for (i in community.ids) {
		groups[[j]] <- unlist(unique(communities[communities[,3]==i,][,1]))
		j <- j+1
	}
	groups
}