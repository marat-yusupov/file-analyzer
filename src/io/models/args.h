#pragma once

#include <string>
#include <vector>

namespace io::models {

struct Args {
    std::string SourcePath;
    std::vector<std::string> HeaderPathList;
};

}  // namespace io::models
