#include <string>
#include <vector>

#include <io/forward.h>

namespace io {

class Parser {
    static constexpr std::string HEADER_PATH_KEY = "-I";

public:
    ~Parser();

    models::Args Run(int argc, char* argv[]);
};

}  // namespace io
