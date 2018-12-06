/**
 * Functions to transform a set of layers into a single one.
 * A projection creates a new layer where actors are taken from one layer and their connections depend
 * on how they are connected to objects in a second layer. Different types of flattening and projection
 *
 * History:
 * - 2018.03.09 file created, following a restructuring of the previous library.
 */


/*
 * transformation.h
 *
 * Functions to transform a set of layers into a single one. A flattening is used when the same actors
 * are present on multiple layers: a new, single layer is created, and edges from all the flattened layers
 * contribute to the connectivity of the new layer.
 * exist.
 */

#ifndef MNET_TRANSFORMATION_PROJECT_H_
#define MNET_TRANSFORMATION_PROJECT_H_

#include <vector>
#include "core/exceptions/assert_not_null.h"
#include "core/utils/math.h"
#include "net/datastructures/objects/Vertex.h"
#include "net/datastructures/objects/EdgeMode.h"
#include "net/measures/degree.h"

namespace uu {
namespace net {


/**
 * A projection creates a new layer where actors are taken from one layer and their connections depend
 * on how they are connected to objects in a second layer. An unweighted projection adds an edge between
 * a1 and a2 (from layer 1) in the new layer if a1 and a2 are both connected to the same object in layer 2.
 * We say that layer 2 is projected into layer 1.
 * @param mnet The multilayer network containing the layers to be merged.
 * @param new_layer_name The name of a new layer, added to the input multilayer network and obtained as a projection of layer 2 into layer 1.
 * @param layer1 The layer containing the actors who will populate the projection.
 * @param layer2 The layer projected into layer 1.
 * @return A pointer to the newly created layer.
 * @throws DuplicateElementException If a layer with the same name already exists.
 */
LayerSharedPtr
project_unweighted(MLNetworkSharedPtr& mnet, const std::string& new_layer_name, const LayerSharedPtr& layer1, const LayerSharedPtr& layer2);


}
}

#endif
