#include "olap/ECube.hpp"

#include "core/exceptions/ElementNotFoundException.hpp"
#include "networks/_impl/observers/VCubeObserver.hpp"

namespace uu {
namespace net {

ECube::
ECube(
    const std::string& name,
    VCube* cube1,
    VCube* cube2,
    EdgeDir dir,
    LoopMode loops

) : name(name), cube1_(cube1), cube2_(cube2), dir_(dir), loops_(loops)
{
    auto store = std::make_unique<SimpleEdgeStore>(cube1, cube2, dir, loops);
    data_ = std::make_unique<MLCube<SimpleEdgeStore>>(std::move(store));

    // register an observer to propagate the removal of vertices to the edge store
    auto obs1 = std::make_unique<VCubeObserver<ECube>>(cube1_, this);
    cube1_->attach(obs1.get());
    data_->register_observer(std::move(obs1));

    auto obs2 = std::make_unique<VCubeObserver<ECube>>(cube2_, this);
    cube2_->attach(obs2.get());
    data_->register_observer(std::move(obs2));

}


const
GenericObjectList<Vertex>*
ECube::
neighbors(
    const Vertex* vertex,
    const VCube* cube,
    EdgeMode mode
) const
{
    return data_->elements_->neighbors(vertex, cube, mode);
}


const
GenericObjectList<Vertex>*
ECube::
neighbors(
    const Vertex* vertex,
    EdgeMode mode
) const
{
    if (cube1_ != cube2_)
    {
        std::string err = "ending vertex cubes cannot be inferred and must be specified";
        throw core::OperationNotSupportedException(err);
    }

    return data_->elements_->neighbors(vertex, cube1_, mode);
}


const
GenericObjectList<Edge>*
ECube::
incident(
    const Vertex* vertex,
    const VCube* cube,
    EdgeMode mode
) const
{
    return data_->elements_->incident(vertex, cube, mode);
}


const
GenericObjectList<Edge>*
ECube::
incident(
    const Vertex* vertex,
    EdgeMode mode
) const
{
    if (cube1_ != cube2_)
    {
        std::string err = "ending vertex cubes cannot be inferred and must be specified";
        throw core::OperationNotSupportedException(err);
    }

    return data_->elements_->incident(vertex, cube1_, mode);
}


const VCube*
ECube::
vcube1(
) const
{
    return cube1_;
}


const VCube*
ECube::
vcube2(
) const
{
    return cube2_;
}


size_t
ECube::
size(
) const
{
    return data_->size();
}


size_t
ECube::
order(
) const
{
    return data_->order();
}


std::vector<size_t>
ECube::
dsize(
) const
{
    return data_->dsize();
}


const std::vector<std::string>&
ECube::
dimensions(
) const
{
    return data_->dimensions();
}


const std::vector<std::vector<std::string>>&
        ECube::
        members(
        ) const
{
    return data_->members();
}


const std::vector<std::string>&
ECube::
members(
    const std::string& dim
) const
{
    return data_->members(dim);
}


const std::vector<std::string>&
ECube::
members(
    size_t dim_idx
) const
{
    return data_->members(dim_idx);
}


typename SimpleEdgeStore::iterator
ECube::
begin(
) const
{
    return data_->begin();
}


typename SimpleEdgeStore::iterator
ECube::
end(
) const
{
    return data_->end();
}


const Edge *
ECube::
add(
    std::shared_ptr<const Edge> edge
)
{
    return data_->add(edge);
}


const Edge *
ECube::
add(
    const Edge* e
)
{
    return data_->add(e);
}


const Edge *
ECube::
add(
    const Vertex* vertex1,
    const VCube* cube1,
    const Vertex* vertex2,
    const VCube* cube2
)
{
    auto key = std::make_tuple(vertex1, cube1, vertex2, cube2);
    return data_->add(key);
}


const Edge *
ECube::
add(
    const Vertex* vertex1,
    const Vertex* vertex2
)
{
    if (cube1_ != cube2_)
    {
        std::string err = "ending vertex cubes cannot be inferred and must be specified";
        throw core::OperationNotSupportedException(err);
    }

    auto key = std::make_tuple(vertex1, cube1_, vertex2, cube2_);
    return data_->add(key);
}


bool
ECube::
contains(
    const Edge* e
) const
{
    return data_->contains(e);
}

bool
ECube::
contains(
    const Vertex* vertex1,
    const VCube* cube1,
    const Vertex* vertex2,
    const VCube* cube2
) const
{
    auto key = std::make_tuple(vertex1, cube1, vertex2, cube2);
    return data_->contains(key);
}

bool
ECube::
contains(
    const Vertex* vertex1,
    const Vertex* vertex2
) const
{
    if (cube1_ != cube2_)
    {
        std::string err = "ending vertex cubes cannot be inferred and must be specified";
        throw core::OperationNotSupportedException(err);
    }

    auto key = std::make_tuple(vertex1, cube1_, vertex2, cube2_);
    return data_->contains(key);
}


const Edge *
ECube::
get(
    const Vertex* vertex1,
    const VCube* cube1,
    const Vertex* vertex2,
    const VCube* cube2
) const
{
    auto key = std::make_tuple(vertex1, cube1, vertex2, cube2);
    return data_->get(key);
}


const Edge *
ECube::
get(
    const Vertex* vertex1,
    const Vertex* vertex2
) const
{
    if (cube1_ != cube2_)
    {
        std::string err = "ending vertex cubes cannot be inferred and must be specified";
        throw core::OperationNotSupportedException(err);
    }

    auto key = std::make_tuple(vertex1, cube1_, vertex2, cube2_);
    return data_->get(key);
}


const Edge*
ECube::
at(
    size_t pos
) const
{
    return data_->at(pos);
}


const Edge*
ECube::
get_at_random(
) const
{
    return data_->get_at_random();
}


int
ECube::
index_of(
    const Edge* e
) const
{
    return data_->index_of(e);
}


bool
ECube::
erase(
    const Edge* e
)
{
    return data_->erase(e);
}


bool
ECube::
erase(
    const Vertex* vertex1,
    const VCube* cube1,
    const Vertex* vertex2,
    const VCube* cube2
)
{
    auto key = std::make_tuple(vertex1, cube1, vertex2, cube2);
    return data_->erase(key);
}


bool
ECube::
erase(
    const Vertex* vertex1,
    const Vertex* vertex2
)
{
    if (cube1_ != cube2_)
    {
        std::string err = "ending vertex cubes cannot be inferred and must be specified";
        throw core::OperationNotSupportedException(err);
    }

    auto key = std::make_tuple(vertex1, cube1_, vertex2, cube2_);
    return data_->erase(key);
}


core::AttributeStore<const Edge>*
ECube::
attr(
) const
{
    return data_->attr();
}


void
ECube::
add_dimension(
    const std::string& name,
    const std::vector<std::string>& members
)
{
    auto tot = UniformDiscretization<Edge>(members.size());
    return data_->add_dimension(name, members, this, tot);
}

void
ECube::
add_member(
    const std::string& name,
    const std::string& member//,
    //bool (*copy)(const Vertex*) = nullptr
)
{
    return data_->add_member(name, member, this);
}


SimpleEdgeStore*
ECube::
cell(
    const std::vector<size_t>& index
)
{
    return data_->cell(index);
}


const SimpleEdgeStore*
ECube::
cell(
    const std::vector<size_t>& index
) const
{
    return data_->cell(index);
}


SimpleEdgeStore*
ECube::
cell(
    const std::vector<std::string>& index
)
{
    return data_->cell(index);
}


const SimpleEdgeStore*
ECube::
cell(
    const std::vector<std::string>& index
) const
{
    return data_->cell(index);
}


size_t
ECube::
num_cells(
) const
{
    return data_->num_cells();
}


std::string
ECube::
to_string(
) const
{
    return "E(" + name + ")";
}


void
ECube::
attach(
    core::Observer<const Edge>* obs
)
{
    data_->elements_->attach(obs);
}


bool
ECube::
is_directed(
) const
{
    return dir_==EdgeDir::DIRECTED?true:false;
}


bool
ECube::
allows_loops(
) const
{
    return loops_==LoopMode::ALLOWED?true:false;
}


std::unique_ptr<ECube>
ECube::
skeleton(
    const std::string& name,
    const std::vector<std::string>& dimensions,
    const std::vector<std::vector<std::string>>& members
) const
{
    auto res = std::make_unique<ECube>(name, cube1_, cube2_, dir_, loops_);
    res->data_ = std::make_unique<MLCube<SimpleEdgeStore>>(dimensions, members);
    return res;
}


SimpleEdgeStore*
ECube::
init(
)
{
    return data_->init(get_store());
}

SimpleEdgeStore*
ECube::
init(
    const std::shared_ptr<SimpleEdgeStore>& store
)
{
    return data_->init(store);
}

SimpleEdgeStore*
ECube::
init(
    const std::vector<size_t>& index,
    const std::shared_ptr<SimpleEdgeStore>& store
)
{
    return data_->init(index, store);
}

SimpleEdgeStore*
ECube::
init(
    size_t pos,
    const std::shared_ptr<SimpleEdgeStore>& store
)
{
    return data_->init(pos, store);
}

SimpleEdgeStore*
ECube::
init(
    const std::vector<size_t>& index
)
{
    return data_->init(index, get_store());
}

SimpleEdgeStore*
ECube::
init(
    size_t pos
)
{
    return data_->init(pos, get_store());
}


core::UnionObserver<SimpleEdgeStore>*
ECube::
register_obs(
)
{
    return data_->register_obs();
}


void
ECube::
register_obs(
    const std::vector<size_t>& index
)
{
    data_->register_obs(index);
}


void
ECube::
register_obs(
    size_t pos
)
{
    data_->register_obs(pos);
}


std::shared_ptr<SimpleEdgeStore>
ECube::
get_store(
) const
{
    return std::make_shared<SimpleEdgeStore>(cube1_, cube2_, dir_, loops_);
}


void
ECube::
erase(
    const VCube* vcube,
    const Vertex* vertex
)
{
    if (order() == 0)
    {
        data_->elements_->erase(vcube, vertex);
    }

    else
    {
        for (size_t i = 0; i < data_->data_.size(); i++)
        {
            data_->data_[i]->erase(vcube, vertex);
        }
    }
}

}
}

