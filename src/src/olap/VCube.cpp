#include "olap/VCube.hpp"

#include "core/exceptions/ElementNotFoundException.hpp"

namespace uu {
namespace net {

VCube::
VCube(
    const std::string& name
) : name(name)
{
    data_ = std::make_unique<MLCube<VertexStore>>(std::make_unique<VertexStore>());
}

VCube::
VCube(
    const VCube& cube
) : name(cube.name)
{
    data_ = std::make_unique<MLCube<VertexStore>>(std::make_unique<VertexStore>());

    if (cube.order() > 0)
    {
        for (size_t i = 0; i < cube.order(); i++)
        {
            add_dimension(cube.dimensions()[i], cube.members(i));
        }

        IndexIterator idx(cube.dsize());

        for (auto i: idx)
        {
            for (auto v: *cube.cell(i))
            {
                cell(i)->add(v);
            }
        }
    }

    else
    {
        for (auto v: cube)
        {
            add(v);
        }
    }
}

size_t
VCube::
size(
) const
{
    return data_->size();
}


size_t
VCube::
order(
) const
{
    return data_->order();
}


std::vector<size_t>
VCube::
dsize(
) const
{
    return data_->dsize();
}


const std::vector<std::string>&
VCube::
dimensions(
) const
{
    return data_->dimensions();
}


const std::vector<std::vector<std::string>>&
        VCube::
        members(
        ) const
{
    return data_->members();
}


const std::vector<std::string>&
VCube::
members(
    const std::string& dim
) const
{
    return data_->members(dim);
}


const std::vector<std::string>&
VCube::
members(
    size_t dim_idx
) const
{
    return data_->members(dim_idx);
}


typename VertexStore::iterator
VCube::
begin(
) const
{
    return data_->begin();
}


typename VertexStore::iterator
VCube::
end(
) const
{
    return data_->end();
}


const Vertex*
VCube::
add(
    const std::shared_ptr<const Vertex>& v
)
{
    return data_->add(v);
}


const Vertex*
VCube::
add(
    const Vertex* v
)
{
    return data_->add(v);
}


const Vertex*
VCube::
add(
    const std::string& key
)
{
    return data_->add(key);
}


bool
VCube::
contains(
    const Vertex* v
) const
{
    return data_->contains(v);
}


bool
VCube::
contains(
    const typename VertexStore::key_type& key
) const
{
    return data_->contains(key);
}



const Vertex*
VCube::
get(
    const typename VertexStore::key_type& key
) const
{
    return data_->get(key);
}


const Vertex*
VCube::
at(
    size_t pos
) const
{
    return data_->at(pos);
}


const Vertex*
VCube::
get_at_random(
) const
{
    return data_->get_at_random();
}


int
VCube::
index_of(
    const Vertex* v
) const
{
    return data_->index_of(v);
}


bool
VCube::
erase(
    const Vertex * obj
)
{
    return data_->erase(obj);
}


bool
VCube::
erase(
    const std::string& key
)
{
    return data_->erase(key);
}


core::AttributeStore<const Vertex>*
VCube::
attr(
) const
{
    return data_->attr();
}

void
VCube::
add_dimension(
    const std::string& name,
    const std::vector<std::string>& members
)
{
    auto tot = UniformDiscretization<Vertex>(members.size());
    return data_->add_dimension(name, members, this, tot);
}

void
VCube::
erase_dimension(
)
{
    data_->erase_dimension(this);
}

void
VCube::
add_member(
    const std::string& name,
    const std::string& member//,
    //bool (*copy)(const Vertex*) = nullptr
)
{
    return data_->add_member(name, member, this);
}

void
VCube::
erase_member(
    const std::string& dim_name,
    const std::string& memb_name
)
{
    return data_->erase_member(dim_name, memb_name);
}

void
VCube::
erase_member(
    const std::string& dim_name
)
{
    return data_->erase_member(dim_name);
}

void
VCube::
sort(
    const std::string& dim_name,
    const std::vector<size_t>& f
)
{
    data_->sort(dim_name, f);
}

void
VCube::
pivot(
    const std::vector<size_t>& f
)
{
    data_->pivot(f);
}

VertexStore*
VCube::
cell(
    const std::vector<size_t>& index
)
{
    return data_->cell(index);
}


const VertexStore*
VCube::
cell(
    const std::vector<size_t>& index
) const
{
    return data_->cell(index);
}


VertexStore*
VCube::
cell(
    const std::vector<std::string>& index
)
{
    return data_->cell(index);
}


const VertexStore*
VCube::
cell(
    const std::vector<std::string>& index
) const
{
    return data_->cell(index);
}


size_t
VCube::
num_cells(
) const
{
    return data_->num_cells();
}


std::string
VCube::
to_string(
) const
{
    return "V(" + name + ")";
}

void
VCube::
attach(
    core::Observer<const Vertex>* obs
)
{
    data_->elements_->attach(obs);
}


std::unique_ptr<VCube>
VCube::
skeleton(
    const std::string& name,
    const std::vector<std::string>& dimensions,
    const std::vector<std::vector<std::string>>& members
) const
{
    auto res = std::make_unique<VCube>(name);
    res->data_ = std::make_unique<MLCube<VertexStore>>(dimensions, members);
    return res;
}


VertexStore*
VCube::
init(
)
{
    return data_->init(get_store());
}

VertexStore*
VCube::
init(
    const std::shared_ptr<VertexStore>& store
)
{
    return data_->init(store);
}

VertexStore*
VCube::
init(
    const std::vector<size_t>& index,
    const std::shared_ptr<VertexStore>& store
)
{
    return data_->init(index, store);
}

VertexStore*
VCube::
init(
    size_t pos,
    const std::shared_ptr<VertexStore>& store
)
{
    return data_->init(pos, store);
}

VertexStore*
VCube::
init(
    const std::vector<size_t>& index
)
{
    return data_->init(index, get_store());
}

VertexStore*
VCube::
init(
    size_t pos
)
{
    return data_->init(pos, get_store());
}

core::UnionObserver<VertexStore>*
VCube::
register_obs(
)
{
    return data_->register_obs();
}

void
VCube::
register_obs(
    const std::vector<size_t>& index
)
{
    data_->register_obs(index);
}

void
VCube::
register_obs(
    size_t pos
)
{
    data_->register_obs(pos);
}


std::shared_ptr<VertexStore>
VCube::
get_store(
) const
{
    return std::make_shared<VertexStore>();
}


}
}

