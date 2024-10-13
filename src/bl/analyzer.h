#pragma once

#include <io/forward.h>

namespace bl {

class Analyzer {
public:
    ~Analyzer();

    void Run(io::models::Args const& args);
};

}  // namespace bl