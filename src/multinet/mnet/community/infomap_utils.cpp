
#ifndef NS_INFOMAP
#define NS_INFOMAP
#endif


namespace uu {
namespace net {

/**
 * This code is taken from the infolab library
 *
std::vector<infomap::ParsedOption>
getConfig(
          infomap::Config& conf,
          const std::string& flags,
          bool noFileIO
          )
{
    infomap::ProgramInterface api("Infomap",
                         "Implementation of the Infomap clustering algorithm based on the Map Equation (see www.mapequation.org)",
                         INFOMAP_VERSION);

    std::vector<std::string> optionalOutputDir; // Used if noFileIO
                                                // --------------------- Input options ---------------------
    if (!noFileIO)
    {
        api.addNonOptionArgument(conf.networkFile, "network_file",
                                 "The file containing the network data. Accepted formats: Pajek (implied by .net) and link list (.txt)");

        api.addOptionalNonOptionArguments(conf.additionalInput, "[additional input]",
                                          "More network layers for multilayer networks.", true);
    }
    else
        conf.networkFile = "no-name";

    api.addOptionArgument(conf.inputFormat, 'i', "input-format",
                          "Specify input format ('pajek', 'link-list', 'states', '3gram', 'multilayer' or 'bipartite') to override format possibly implied by file extension.", "s");

    api.addOptionArgument(conf.withMemory, "with-memory",
                          "Use second order Markov dynamics and let nodes be part of different modules. Simulate memory from first-order data if not '3gram' input.", true);

        //    api.addOptionArgument(conf.bipartite, "bipartite",
        //            "Let the source id of a link belong to a different kind of nodes and ignore that set in the output.");

    api.addOptionArgument(conf.multiplexAddMissingNodes, "multilayer-add-missing-nodes",
                          "Adjust multilayer network so that the same set of physical nodes exist in all layers.", true);

    api.addOptionArgument(conf.multiplexAddMissingNodes, "multiplex-add-missing-nodes",
                          "[Deprecated, use multilayer-add-missing-nodes] Adjust multilayer network so that the same set of physical nodes exist in all layers.", true);

    api.addOptionArgument(conf.skipAdjustBipartiteFlow, "skip-adjust-bipartite-flow",
                          "Skip distributing all flow from the bipartite nodes (first column) to the ordinary nodes (second column).", true);

    api.addOptionArgument(conf.withMemory, "overlapping",
                          "Let nodes be part of different and overlapping modules. Applies to ordinary networks by first representing the memoryless dynamics with memory nodes.");

    api.addOptionArgument(conf.hardPartitions, "hard-partitions",
                          "Don't allow overlapping modules in memory networks by keeping the memory nodes constrained into their physical nodes.", true);

    api.addOptionArgument(conf.nonBacktracking, "non-backtracking",
                          "Use non-backtracking dynamics and let nodes be part of different and overlapping modules. Applies to ordinary networks by first representing the non-backtracking dynamics with memory nodes.", true);

    api.addOptionArgument(conf.parseWithoutIOStreams, "without-iostream",
                          "Parse the input network data without the iostream library. Can be a bit faster, but not as robust.", true);

    api.addOptionArgument(conf.zeroBasedNodeNumbers, 'z', "zero-based-numbering",
                          "Assume node numbers start from zero in the input file instead of one.");

    api.addOptionArgument(conf.includeSelfLinks, 'k', "include-self-links",
                          "Include links with the same source and target node. (Ignored by default.)");

    api.addOptionArgument(conf.completeDanglingMemoryNodes, "complete-dangling-memory-nodes",
                          "Add first order links to complete dangling memory nodes.");

    api.addOptionArgument(conf.nodeLimit, 'O', "node-limit",
                          "Limit the number of nodes to read from the network. Ignore links connected to ignored nodes.", "n", true);

    api.addOptionArgument(conf.weightThreshold, "weight-threshold",
                          "Limit the number of links to read from the network. Ignore links with less weight than the threshold.", "n", true);

    api.addOptionArgument(conf.preClusterMultiplex, "pre-cluster-multiplex",
                          "Pre-cluster multiplex networks layer by layer.", true);

    api.addOptionArgument(conf.clusterDataFile, 'c', "cluster-data",
                          "Provide an initial two-level (.clu format) or multi-layer (.tree format) solution.", "p", true);

    api.addOptionArgument(conf.noInfomap, "no-infomap",
                          "Don't run Infomap. Useful if initial cluster data should be preserved or non-modular data printed.", true);

        // --------------------- Output options ---------------------

    api.addOptionArgument(conf.outName, "out-name",
                          "Use this name for the output files, like [output_directory]/[out-name].tree", "s", true);

    api.addOptionArgument(conf.noFileOutput, '0', "no-file-output",
                          "Don't print any output to file.", true);

    api.addOptionArgument(conf.printMap, "map",
                          "Print the top two-level modular network in the .map format.");

    api.addOptionArgument(conf.printClu, "clu",
                          "Print the top cluster indices for each node.");

    api.addOptionArgument(conf.printTree, "tree",
                          "Print the hierarchy in .tree format. (default true if no other output with cluster data)");

    api.addOptionArgument(conf.printFlowTree, "ftree",
                          "Print the hierarchy in .tree format and append the hierarchically aggregated network links.", true);

    api.addOptionArgument(conf.printBinaryTree, "btree",
                          "Print the tree in a streamable binary format.", true);

    api.addOptionArgument(conf.printBinaryFlowTree, "bftree",
                          "Print the tree including horizontal flow links in a streamable binary format.");

    api.addOptionArgument(conf.printNodeRanks, "node-ranks",
                          "Print the calculated flow for each node to a file.", true);

    api.addOptionArgument(conf.printFlowNetwork, "flow-network",
                          "Print the network with calculated flow values.", true);

    api.addOptionArgument(conf.printPajekNetwork, "pajek",
                          "Print the parsed network in Pajek format.", true);

    api.addOptionArgument(conf.printStateNetwork, "print-state-network",
                          "Print the internal state network.", true);

    api.addOptionArgument(conf.printExpanded, "expanded",
                          "Print the expanded network of memory nodes if possible.", true);

        // --------------------- Core algorithm options ---------------------
    api.addOptionArgument(conf.twoLevel, '2', "two-level",
                          "Optimize a two-level partition of the network.");

    bool dummyUndirected;
    api.addOptionArgument(dummyUndirected, 'u', "undirected",
                          "Assume undirected links. (default)");

    api.addOptionArgument(conf.directed, 'd', "directed",
                          "Assume directed links.");

    api.addOptionArgument(conf.undirdir, 't', "undirdir",
                          "Two-mode dynamics: Assume undirected links for calculating flow, but directed when minimizing codelength.");

    api.addOptionArgument(conf.outdirdir, "outdirdir",
                          "Two-mode dynamics: Count only ingoing links when calculating the flow, but all when minimizing codelength.", true);

    api.addOptionArgument(conf.rawdir, 'w', "rawdir",
                          "Two-mode dynamics: Assume directed links and let the raw link weights be the flow.", true);

    api.addOptionArgument(conf.recordedTeleportation, 'e', "recorded-teleportation",
                          "If teleportation is used to calculate the flow, also record it when minimizing codelength.", true);

    api.addOptionArgument(conf.teleportToNodes, 'o', "to-nodes",
                          "Teleport to nodes instead of to links, assuming uniform node weights if no such input data.", true);

    api.addOptionArgument(conf.teleportationProbability, 'p', "teleportation-probability",
                          "The probability of teleporting to a random node or link.", "f", true);

    api.addOptionArgument(conf.selfTeleportationProbability, 'y', "self-link-teleportation-probability",
                          "Additional probability of teleporting to itself. Effectively increasing the code rate, generating more and smaller modules.", "f", true);

    api.addOptionArgument(conf.markovTime, "markov-time",
                          "Scale link flow with this value to change the cost of moving between modules. Higher for less modules.", "f", true);

    api.addOptionArgument(conf.variableMarkovTime, "variable-markov-time",
                          "Scale link flow per node inversely proportional to the node exit entropy to easier split connected hubs and keep long chains together.", true);

    api.addOptionArgument(conf.preferredNumberOfModules, "preferred-number-of-modules",
                          "Stop merge or split modules if preferred number of modules is reached.", "n", true);

    api.addOptionArgument(conf.multiplexRelaxRate, "multilayer-relax-rate",
                          "The probability to relax the constraint to move only in the current layer and instead move to a random layer where the same physical node is present. If negative, the inter-links have to be provided.", "f", true);

    api.addOptionArgument(conf.multiplexJSRelaxRate, "multilayer-js-relax-rate",
                          "The probability to relax the constraint to move only in the current layer and instead move to a random layer where the same physical node is present and proportional to the out-link similarity measured by the Jensen-Shannon divergence. If negative, the inter-links have to be provided.", "f", true);

    api.addOptionArgument(conf.multiplexJSRelaxLimit, "multilayer-js-relax-limit",
                          "The minimum out-link similarity measured by the Jensen-Shannon divergence to relax to other layer. From 0 to 1. No limit if negative.", "f", true);

    api.addOptionArgument(conf.multiplexRelaxLimit, "multilayer-relax-limit",
                          "The number of neighboring layers in each direction to relax to. If negative, relax to any layer.", "n", true);

    api.addOptionArgument(conf.multiplexRelaxRate, "multiplex-relax-rate",
                          "[Deprecated, use multilayer-relax-rate] The probability to relax the constraint to move only in the current layer and instead move to a random layer where the same physical node is present. If negative, the inter-links have to be provided.", "f", true);

    api.addOptionArgument(conf.multiplexJSRelaxRate, "multiplex-js-relax-rate",
                          "[Deprecated, use multilayer-js-relax-rate] The probability to relax the constraint to move only in the current layer and instead move to a random layer where the same physical node is present and proportional to the out-link similarity measured by the Jensen-Shannon divergence. If negative, the inter-links have to be provided.", "f", true);

    api.addOptionArgument(conf.multiplexJSRelaxLimit, "multiplex-js-relax-limit",
                          "[Deprecated, use multilayer-js-relax-limit] The minimum out-link similarity measured by the Jensen-Shannon divergence to relax to other layer. From 0 to 1. No limit if negative.", "f", true);

    api.addOptionArgument(conf.multiplexRelaxLimit, "multiplex-relax-limit",
                          "[Deprecated, use multilayer-relax-limit] The number of neighboring layers in each direction to relax to. If negative, relax to any layer.", "n", true);

    api.addOptionArgument(conf.seedToRandomNumberGenerator, 's', "seed",
                          "A seed (integer) to the random number generator.", "n");

        // --------------------- Performance and accuracy options ---------------------
    api.addOptionArgument(conf.numTrials, 'N', "num-trials",
                          "The number of outer-most loops to run before picking the best solution.", "n");

    api.addOptionArgument(conf.minimumCodelengthImprovement, 'm', "min-improvement",
                          "Minimum codelength threshold for accepting a new solution.", "f", true);

    api.addOptionArgument(conf.randomizeCoreLoopLimit, 'a', "random-loop-limit",
                          "Randomize the core loop limit from 1 to 'core-loop-limit'", true);

    api.addOptionArgument(conf.coreLoopLimit, 'M', "core-loop-limit",
                          "Limit the number of loops that tries to move each node into the best possible module", "n", true);

    api.addOptionArgument(conf.levelAggregationLimit, 'L', "core-level-limit",
                          "Limit the number of times the core loops are reapplied on existing modular network to search bigger structures.", "n", true);

    api.addOptionArgument(conf.tuneIterationLimit, 'T', "tune-iteration-limit",
                          "Limit the number of main iterations in the two-level partition algorithm. 0 means no limit.", "n", true);

    api.addOptionArgument(conf.minimumRelativeTuneIterationImprovement, 'U', "tune-iteration-threshold",
                          "Set a codelength improvement threshold of each new tune iteration to 'f' times the initial two-level codelength.", "f", true);

    api.addOptionArgument(conf.fastFirstIteration, "fast-first-iteration",
                          "Move nodes to strongest connected module in the first iteration instead of minimizing the map equation.", true);

    api.addOptionArgument(conf.fastCoarseTunePartition, 'C', "fast-coarse-tune",
                          "Try to find the quickest partition of each module when creating sub-modules for the coarse-tune part.", true);

    api.addOptionArgument(conf.alternateCoarseTuneLevel, 'A', "alternate-coarse-tune-level",
                          "Try to find different levels of sub-modules to move in the coarse-tune part.", true);

    api.addOptionArgument(conf.coarseTuneLevel, 'S', "coarse-tune-level",
                          "Set the recursion limit when searching for sub-modules. A level of 1 will find sub-sub-modules.", "n", true);

    api.addIncrementalOptionArgument(conf.fastHierarchicalSolution, 'F', "fast-hierarchical-solution",
                                     "Find top modules fast. Use -FF to keep all fast levels. Use -FFF to skip recursive part.");

    api.addIncrementalOptionArgument(conf.lowMemoryPriority, 'l', "low-memory",
                                     "Prioritize memory efficient algorithms before fast. Use -ll to optimize even more, but this may give approximate results.", true);

    api.addOptionArgument(conf.innerParallelization, "inner-parallelization",
                          "Parallelize the innermost loop for greater speed. Note that this may give some accuracy tradeoff.");

    api.addOptionArgument(conf.resetConfigBeforeRecursion, "reset-options-before-recursion",
                          "Reset options tuning the speed and accuracy before the recursive part.", true);

    api.addOptionArgument(conf.showBiNodes, "show-bipartite-nodes",
                          "Include the bipartite nodes in the output.", true);

        // --------------------- Output options ---------------------
    if (!noFileIO)
    {
        api.addNonOptionArgument(conf.outDirectory, "out_directory",
                                 "The directory to write the results to");
    }
    else
    {
        api.addOptionalNonOptionArguments(optionalOutputDir, "[out_directory]",
                                          "The directory to write the results to.");
    }

    api.addIncrementalOptionArgument(conf.verbosity, 'v', "verbose",
                                     "Verbose output on the console. Add additional 'v' flags to increase verbosity up to -vvv.");

    api.addOptionArgument(conf.silent, "silent",
                          "No output on the console.");

    api.parseArgs(flags);

    conf.parsedArgs = flags;

    if (noFileIO)
    {
        if (!optionalOutputDir.empty())
            conf.outDirectory = optionalOutputDir[0];
        else
            conf.noFileOutput = true;
    }

        // Some checks
    if (*--conf.outDirectory.end() != '/')
        conf.outDirectory.append("/");

    if (conf.haveOutput() && !infomap::isDirectoryWritable(conf.outDirectory))
        throw infomap::FileOpenError(infomap::io::Str() << "Can't write to directory '" <<
                            conf.outDirectory << "'. Check that the directory exists and that you have write permissions.");

    if (conf.outName.empty())
        conf.outName = infomap::FileURI(conf.networkFile).getName();

    return api.getUsedOptionArguments();
}*/


}
}

