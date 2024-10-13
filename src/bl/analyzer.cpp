#include <fstream>

#include <bl/analyzer.h>
#include <io/models/args.h>

namespace bl {

Analyzer::~Analyzer() = default;

void Analyzer::Run(io::models::Args const& args) {
    bool analyze_ended = false;

    while(!analyze_ended) {
        // Get source path and open a files
        // Put file contents in bl::Parser
        // bl::Parser return someone (???)
    }
}

}  // namespace bl