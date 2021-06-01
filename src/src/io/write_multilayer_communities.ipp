namespace uu {
namespace net {

template <typename M>
void
write_multilayer_communities(
    CommunityStructure<M>* communities,
    const std::string& output_file,
    char separator
)
{
    std::ofstream outfile;
    outfile.open(output_file);
    int community_id = 0;

    for (auto community: *communities)
    {
        for (auto n: *community)
        {
            outfile << n.v->name << separator << n.c->name << separator << community_id << std::endl;
        }

        community_id++;
    }

    outfile.close();
}

}
}
