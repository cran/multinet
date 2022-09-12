loadModule("multinet",TRUE)

# Casting of (a portion of) a multilayer network into an igraph (multi)graph. This is done by creating an intermediate graphml file and loading it as an igraph file
as.igraph.Rcpp_RMLNetwork <- function (x, layers=NULL, merge.actors=TRUE, all.actors=FALSE, ...) {
    if (is.null(layers)) {
        layers <- layers_ml(x)
    }
    dir = max(is_directed_ml(x)$dir)
    
    if (merge.actors) {
        a_df <- actors_ml(x, layers, attributes=T)
        e <- as.data.frame(edges_ml(x, layers, attributes=T))
        #e <- e[e$from_layer %in% layers & e$to_layer %in% layers,]
        e_df <- NULL
        if (length(e)>5) {
            e_df <- data.frame(from_actor=e$from_actor, to_actor=e$to_actor, layers=paste(e$from_layer, "-", e$to_layer, sep = ""), e[6:length(e)])
        }
        else {
            e_df <- data.frame(from_actor=e$from_actor, to_actor=e$to_actor, layers=paste(e$from_layer, "-", e$to_layer, sep = ""))
        }
        if (dir) {
            e <- e[e$dir==0,]
            if (nrow(e) > 0) {
                e_df_reverse <- NULL
                if (length(e)>5) {
                    e_df_reverse <- data.frame(from_actor=e$to_actor, to_actor=e$from_actor, layers=paste(e$to_layer, "-", e$from_layer, sep = ""), e[6:length(e)])
                }
                else {
                    e_df_reverse <- data.frame(from_actor=e$to_actor, to_actor=e$from_actor, layers=paste(e$to_layer, "-", e$from_layer, sep = ""))
                }
                e_df <- rbind(e_df, e_df_reverse)
            }
        }
        g <- graph_from_data_frame(vertices=a_df, e_df, directed=dir)
    }
    else {
        a_df <- vertices_ml(x, layers, attributes=T)
        v_df <- NULL
        if (length(a_df)>2) {
            v_df <- data.frame(node=paste(a_df$layer, "::", a_df$actor, sep = ""), layer=a_df$layer, a_df[3:length(a_df)])
        }
        e <- as.data.frame(edges_ml(x, layers, attributes=T))
        #e <- e[e$from_layer %in% layers & e$to_layer %in% layers,]
        e_df <- NULL
        if (length(e)>5) {
            e_df <- data.frame(from_actor=paste(e$from_layer, "::", e$from_actor, sep = ""), to_actor=paste(e$to_layer, "::", e$to_actor, sep = ""), e[6:length(e)])
        }
        else {
            e_df <- data.frame(from_actor=paste(e$from_layer, "::", e$from_actor, sep = ""), to_actor=paste(e$to_layer, "::", e$to_actor, sep = ""))
        }
        if (dir) {
            e <- e[e$dir==0,]
            if (nrow(e) > 0) {
                e_df_reverse <- NULL
                if (length(e)>5) {
                    e_df <- data.frame(from_actor=paste(e$to_layer, "::", e$to_actor, sep = ""), to_actor=paste(e$from_layer, "::", e$from_actor, sep = ""), e[6:length(e)])
                }
                else {
                    e_df <- data.frame(from_actor=paste(e$to_layer, "::", e$to_actor, sep = ""), to_actor=paste(e$from_layer, "::", e$from_actor, sep = ""))
                }
                e_df <- rbind(e_df, e_df_reverse)
            }
        }
        g <- graph_from_data_frame(vertices=v_df, e_df, directed=dir)
    }
    g
}

# A function to convert the network into a list of igraph objects
as.list.Rcpp_RMLNetwork <- function(x, ...) {
    layer.names = sort(layers_ml(x))
    layers <- vector("list",num_layers_ml(x)+1)
    layers[[1]] <- as.igraph(x)
    names(layers)[1] <- "_flat_"
    if (num_layers_ml(x)>0) {
        for (i in 1 : num_layers_ml(x)) {
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
add_igraph_layer_ml <- function(n, g, name)
{
    if (is.null(vertex_attr(g)$name))
    {
        stop("the igraph object must have a vertex attribute 'name' with the names of the actors")
    }
    
    add_layers_ml(n, name, is.directed(g))
    
    # no longer necessary: add_actors_ml(n, vertex_attr(g)$name) # remove from next version
    
    vertices = data.frame(actor=vertex_attr(g)$name, layer=name)
    add_vertices_ml(n, vertices)
    
    for (attr in names(vertex_attr(g)))
    {
        if (is.numeric(vertex_attr(g)[[attr]]))
        {
            add_attributes_ml(n, attributes=attr, type="numeric", target="vertex", layer=name)
            set_values_ml(n, attr, vertices=vertices, values=vertex_attr(g)[[attr]])
        }
        if (is.character(vertex_attr(g)[[attr]]))
        {
            add_attributes_ml(n, attributes=attr, type="string", target="vertex", layer=name)
            set_values_ml(n, attr, vertices=vertices, values=vertex_attr(g)[[attr]])
        }
        if (is.logical(vertex_attr(g)[[attr]]))
        {
            add_attributes_ml(n, attributes=attr, type="numeric", target="vertex", layer=name)
            set_values_ml(n, attr, vertices=vertices, values=as.numeric(vertex_attr(g)[[attr]]))
        }
    }
    
    
    edges = data.frame(
    actor1=get.edgelist(g)[,1], layer1=name,
    actor2=get.edgelist(g)[,2], layer2=name)
    
    add_edges_ml(n, edges)
    
    for (attr in names(edge_attr(g)))
    {
        if (is.numeric(edge_attr(g)[[attr]]))
        {
            add_attributes_ml(n, attributes=attr, type="numeric", target="edge", layer=name)
            set_values_ml(n, attr, edges=edges, values=edge_attr(g)[[attr]])
        }
        if (is.character(edge_attr(g)[[attr]]))
        {
            add_attributes_ml(n, attributes=attr, type="string", target="edge", layer=name)
            set_values_ml(n, attr, edges=edges, values=edge_attr(g)[[attr]])
        }
        if (is.logical(vertex_attr(g)[[attr]]))
        {
            add_attributes_ml(n, attributes=attr, type="numeric", target="vertex", layer=name)
            set_values_ml(n, attr, edges=edges, values=as.numeric(edge_attr(g)[[attr]]))
        }
    }
}
