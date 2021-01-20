/**
 * History:
 * - 2019.07.21 File created
 */

#include "core/exceptions/ElementNotFoundException.hpp"
#include "olap/ECube.hpp"

namespace uu {
namespace net {

ECube::
ECube(
    //const std::string& name,
    const VertexStore* vc1,
    const VertexStore* vc2,
    EdgeDir dir,
    const std::vector<std::string>& dimensions,
    const std::vector<std::vector<std::string>>& members

) : vc1(vc1), vc2(vc2), edge_directionality(dir)
{
    name_ = "e-cube"; // @todo is name necessary?

    edge_directionality = dir;

    /*std::vector<std::shared_ptr<MDSimpleEdgeStore<VertexStore>>> elements;
    size_t cube_size = 1;

    for (auto dim: members)
    {
        cube_size *= dim.size();
    }

    for (size_t i = 0; i < cube_size; i++)
    {
        elements.push_back(std::make_shared<MDSimpleEdgeStore<VertexStore>>(vc1, vc2, dir));
    }*/

    auto elements = std::make_unique<MDSimpleEdgeStore<VertexStore>>(vc1, vc2, dir);
    cube_ = std::make_unique<MLCube<MDSimpleEdgeStore<VertexStore>>>(std::move(elements), dimensions, members);
    //, elements.begin(), elements.end());
}

std::unique_ptr<ECube>
ECube::
model(
    const std::vector<std::string>& dim,
    const std::vector<std::vector<std::string>>& members
) const
{
    return std::make_unique<ECube>(vc1, vc2, edge_directionality, dim, members);
}

const VertexStore*
ECube::
vcube1(
) const
{
    return vc1;
}


const VertexStore*
ECube::
vcube2(
) const
{
    return vc2;
}

const MDSimpleEdgeStore<VertexStore>*
ECube::
edges(
) const
{
    return cube_->elements();
}
/*
MDSimpleEdgeStore<VertexStore>::iterator
ECube::
begin(
) const
{
return cube_->elements()->begin();
}

MDSimpleEdgeStore<VertexStore>::iterator
ECube::
end(
) const
{
return cube_->elements()->end();
}
*/

std::vector<size_t>
ECube::
size(
) const
{
    return cube_->size();
}

/*
bool
ECube::
contains(
const MLEdge<Vertex, VertexStore>* v
) const
{
return cube_->elements()->contains(v);
}


const MLEdge<Vertex, VertexStore>*
ECube::
get(
const Vertex* v1,
const VertexStore* l1,
const Vertex* v2,
const VertexStore* l2
) const
{
return cube_->elements()->get(v1,l1,v2,l2);
}

const MLEdge<Vertex, VertexStore>*
ECube::
at(
size_t pos
) const
{
return cube_->elements()->at(pos);
}

const MLEdge<Vertex, VertexStore>*
ECube::
get_at_random(
) const
{
return cube_->elements()->get_at_random();
}


int
ECube::
index_of(
const MLEdge<Vertex, VertexStore>* v
) const
{
return cube_->elements()->index_of(v);
}
*/


core::AttributeStore<MLEdge<Vertex, VertexStore>>*
        ECube::
        attr(
        )
{
    return cube_->attr();
}


const core::AttributeStore<MLEdge<Vertex, VertexStore>>*
        ECube::
        attr(
        ) const
{
    return cube_->attr();
}


size_t
ECube::
order(
) const
{
    return cube_->order();
}


const std::vector<std::string>&
ECube::
dim(
) const
{
    return cube_->dim();
}

const std::vector<std::vector<std::string>>&
        ECube::
        members(
        ) const
{
    return cube_->members();
}

const std::vector<std::string>&
ECube::
members(
    const std::string& dim
) const
{
    return cube_->members(dim);
}


MDSimpleEdgeStore<VertexStore>*
ECube::
operator[](
    const std::vector<size_t>& index
)
{
    return cube_->operator[](index);
}


MDSimpleEdgeStore<VertexStore>*
ECube::
operator[](
    const std::vector<std::string>& index
)
{
    return cube_->operator[](index);
}


const MDSimpleEdgeStore<VertexStore>*
ECube::
operator[](
    const std::vector<size_t>& index
) const
{
    return cube_->operator[](index);
}


const MDSimpleEdgeStore<VertexStore>*
ECube::
operator[](
    const std::vector<std::string>& index
) const
{
    return cube_->operator[](index);
}


MDSimpleEdgeStore<VertexStore>*
ECube::
at(
    const std::vector<size_t>& index
)
{
    return cube_->at(index);
}


MDSimpleEdgeStore<VertexStore>*
ECube::
at(
    const std::vector<std::string>& index
)
{
    return cube_->at(index);
}

const MDSimpleEdgeStore<VertexStore>*
ECube::
at(
    const std::vector<size_t>& index
) const
{
    return cube_->at(index);
}


const MDSimpleEdgeStore<VertexStore>*
ECube::
at(
    const std::vector<std::string>& index
) const
{
    return cube_->at(index);
}

std::string
ECube::
to_string(
) const
{
    return name_;
}


bool
ECube::
is_directed(
) const
{
    return edge_directionality==EdgeDir::DIRECTED?true:false;
}


void
ECube::
attach(
    core::Observer<const MLEdge<Vertex, VertexStore>>* obs
)
{
    // @todo
    //cube_->elements()->attach(obs);
}

void
ECube::
init(
)
{
    auto iter = core::IndexIterator(size());

    for (auto index: iter)
    {
        auto new_store = std::make_shared<MDSimpleEdgeStore<VertexStore>>(vc1, vc2, edge_directionality);
        cube_->init(index, new_store);
    }
}


MDSimpleEdgeStore<VertexStore>*
ECube::
init(
    const std::vector<size_t>& index
)
{
    auto new_store = std::make_shared<MDSimpleEdgeStore<VertexStore>>(vc1, vc2, edge_directionality);
    return cube_->init(index, new_store);
}


MDSimpleEdgeStore<VertexStore>*
ECube::
init(
    const std::vector<size_t>& index,
    std::shared_ptr<MDSimpleEdgeStore<VertexStore>> cell
)
{
    return cube_->init(index, cell);
}


/*
std::unique_ptr<ECube>
ECube::
create(
const std::string& name,
const std::vector<std::string>& dim,
const std::vector<std::vector<std::string>>& members
)
{
size_t num_entries = 1;

for (auto m: members)
{
    num_entries *= m.size();
}

std::vector<const std::shared_ptr<MDSimpleEdgeStore<VertexStore>>> stores;

for (size_t i = 0; i < num_entries; i++)
{
    stores.push_back(std::make_shared<MDSimpleEdgeStore<VertexStore>>());
}

return std::make_unique<ECube>(name, dim, members, stores.begin(), stores.end());
}
*/

}
}

