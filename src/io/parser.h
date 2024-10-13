#pragma once

#include <string>

namespace io {

class Parser {
    static constexpr std::string HEADER_PATH_KEY = "-I";

public:
    ~Parser();

    static models::Args Run(int argc, char* argv[]);
};

}  // namespace io
