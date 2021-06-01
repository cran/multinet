#include "olap/MECube.hpp"

#include "core/exceptions/ElementNotFoundException.hpp"
#include "networks/_impl/observers/VCubeObserver.hpp"

namespace uu {
namespace net {

MECube::
MECube(
    const std::string& name,
    VCube* cube1,
    VCube* cube2,
    EdgeDir dir,
    LoopMode loops

) : name(name), cube1_(cube1), cube2_(cube2), dir_(dir), loops_(loops)
{
    auto store = std::make_unique<MultiEdgeStore>(cube1, cube2, dir, loops);
    cube_ = std::make_unique<MLCube<MultiEdgeStore>>(std::move(store));

    // register an observer to propagate the removal of vertices to the edge store
    auto obs1 = std::make_unique<VCubeObserver<MECube>>(cube1_, this);
    cube1_->attach(obs1.get());
    cube_->register_observer(std::move(obs1));

    auto obs2 = std::make_unique<VCubeObserver<MECube>>(cube2_, this);
    cube2_->attach(obs2.get());
    cube_->register_observer(std::move(obs2));

}


const
GenericObjectList<Vertex>*
MECube::
neighbors(
    const Vertex* vertex,
    const VCube* cube,
    EdgeMode mode
) const
{
    return cube_->elements_->neighbors(vertex, cube, mode);
}


const
GenericObjectList<Vertex>*
MECube::
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

    return cube_->elements_->neighbors(vertex, cube1_, mode);
}


const
GenericObjectList<Edge>*
MECube::
incident(
    const Vertex* vertex,
    const VCube* cube,
    EdgeMode mode
) const
{
    return cube_->elements_->incident(vertex, cube, mode);
}


const
GenericObjectList<Edge>*
MECube::
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

    return cube_->elements_->incident(vertex, cube1_, mode);
}


const VCube*
MECube::
vcube1(
) const
{
    return cube1_;
}


const VCube*
MECube::
vcube2(
) const
{
    return cube2_;
}


size_t
MECube::
size(
) const
{
    return cube_->size();
}


size_t
MECube::
order(
) const
{
    return cube_->order();
}


std::vector<size_t>
MECube::
dsize(
) const
{
    return cube_->dsize();
}


const std::vector<std::string>&
MECube::
dimensions(
) const
{
    return cube_->dimensions();
}


const std::vector<std::vector<std::string>>&
        MECube::
        members(
        ) const
{
    return cube_->members();
}


const std::vector<std::string>&
MECube::
members(
    const std::string& dim
) const
{
    return cube_->members(dim);
}


const std::vector<std::string>&
MECube::
members(
    size_t dim_idx
) const
{
    return cube_->members(dim_idx);
}


typename MultiEdgeStore::iterator
MECube::
begin(
) const
{
    return cube_->begin();
}


typename MultiEdgeStore::iterator
MECube::
end(
) const
{
    return cube_->end();
}


const Edge *
MECube::
add(
    std::shared_ptr<const Edge> edge
)
{
    return cube_->add(edge);
}


const Edge *
MECube::
add(
    const Edge* e
)
{
    return cube_->add(e);
}


const Edge *
MECube::
add(
    const Vertex* vertex1,
    const VCube* cube1,
    const Vertex* vertex2,
    const VCube* cube2
)
{
    auto key = std::make_tuple(vertex1, cube1, vertex2, cube2);
    return cube_->add(key);
}


const Edge *
MECube::
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
    return cube_->add(key);
}


bool
MECube::
contains(
    const Edge* e
) const
{
    return cube_->contains(e);
}

bool
MECube::
contains(
    const Vertex* vertex1,
    const VCube* cube1,
    const Vertex* vertex2,
    const VCube* cube2
) const
{
    auto key = std::make_tuple(vertex1, cube1, vertex2, cube2);
    return cube_->contains(key);
}

bool
MECube::
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
    return cube_->contains(key);
}


core::SortedRandomSet<const Edge*>
MECube::
get(
    const Vertex* vertex1,
    const VCube* cube1,
    const Vertex* vertex2,
    const VCube* cube2
) const
{
    auto key = std::make_tuple(vertex1, cube1, vertex2, cube2);
    return cube_->elements_->get(key);
}


core::SortedRandomSet<const Edge*>
MECube::
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
    return cube_->elements_->get(key);
}


const Edge*
MECube::
at(
    size_t pos
) const
{
    return cube_->at(pos);
}


const Edge*
MECube::
get_at_random(
) const
{
    return cube_->get_at_random();
}


int
MECube::
index_of(
    const Edge* e
) const
{
    return cube_->index_of(e);
}


bool
MECube::
erase(
    const Edge* e
)
{
    return cube_->erase(e);
}


bool
MECube::
erase(
    const Vertex* vertex1,
    const VCube* cube1,
    const Vertex* vertex2,
    const VCube* cube2
)
{
    auto key = std::make_tuple(vertex1, cube1, vertex2, cube2);
    return cube_->erase(key);
}


bool
MECube::
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
    return cube_->erase(key);
}


core::AttributeStore<const Edge>*
MECube::
attr(
) const
{
    return cube_->attr();
}


void
MECube::
add_dimension(
    const std::string& name,
    const std::vector<std::string>& members
)
{
    auto tot = UniformDiscretization<Edge>(members.size());
    return cube_->add_dimension(name, members, this, tot);
}

void
MECube::
add_member(
    const std::string& name,
    const std::string& member//,
    //bool (*copy)(const Vertex*) = nullptr
)
{
    return cube_->add_member(name, member, this);
}


MultiEdgeStore*
MECube::
cell(
    const std::vector<size_t>& index
)
{
    return cube_->cell(index);
}


const MultiEdgeStore*
MECube::
cell(
    const std::vector<size_t>& index
) const
{
    return cube_->cell(index);
}


MultiEdgeStore*
MECube::
cell(
    const std::vector<std::string>& index
)
{
    return cube_->cell(index);
}


const MultiEdgeStore*
MECube::
cell(
    const std::vector<std::string>& index
) const
{
    return cube_->cell(index);
}


size_t
MECube::
num_cells(
) const
{
    return cube_->num_cells();
}


std::string
MECube::
to_string(
) const
{
    return "E(" + name + ")";
}


void
MECube::
attach(
    core::Observer<const Edge>* obs
)
{
    cube_->elements_->attach(obs);
}


bool
MECube::
is_directed(
) const
{
    return dir_==EdgeDir::DIRECTED?true:false;
}


bool
MECube::
allows_loops(
) const
{
    return loops_==LoopMode::ALLOWED?true:false;
}


std::unique_ptr<MECube>
MECube::
skeleton(
    const std::string& name,
    const std::vector<std::string>& dimensions,
    const std::vector<std::vector<std::string>>& members
) const
{
    auto res = std::make_unique<MECube>(name, cube1_, cube2_, dir_, loops_);
    res->cube_ = std::make_unique<MLCube<MultiEdgeStore>>(dimensions, members);
    return res;
}


MultiEdgeStore*
MECube::
init(
)
{
    return cube_->init(get_store());
}

MultiEdgeStore*
MECube::
init(
    const std::shared_ptr<MultiEdgeStore>& store
)
{
    return cube_->init(store);
}

MultiEdgeStore*
MECube::
init(
    const std::vector<size_t>& index,
    const std::shared_ptr<MultiEdgeStore>& store
)
{
    return cube_->init(index, store);
}

MultiEdgeStore*
MECube::
init(
    size_t pos,
    const std::shared_ptr<MultiEdgeStore>& store
)
{
    return cube_->init(pos, store);
}

MultiEdgeStore*
MECube::
init(
    const std::vector<size_t>& index
)
{
    return cube_->init(index, get_store());
}

MultiEdgeStore*
MECube::
init(
    size_t pos
)
{
    return cube_->init(pos, get_store());
}


core::UnionObserver<MultiEdgeStore>*
MECube::
register_obs(
)
{
    return cube_->register_obs();
}


void
MECube::
register_obs(
    const std::vector<size_t>& index
)
{
    cube_->register_obs(index);
}


void
MECube::
register_obs(
    size_t pos
)
{
    cube_->register_obs(pos);
}


std::shared_ptr<MultiEdgeStore>
MECube::
get_store(
) const
{
    return std::make_shared<MultiEdgeStore>(cube1_, cube2_, dir_, loops_);
}


void
MECube::
erase(
    const VCube* vcube,
    const Vertex* vertex
)
{
    if (order() == 0)
    {
        cube_->elements_->erase(vcube, vertex);
    }

    else
    {
        for (size_t i = 0; i < cube_->data_.size(); i++)
        {
            cube_->data_[i]->erase(vcube, vertex);
        }
    }
}

}
}

