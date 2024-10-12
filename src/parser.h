#include <string>
#include <vector>

struct Args {
    std::string SourcePath;
    std::vector<std::string> HeaderPathList;
};

class Parser {
    static constexpr std::string HEADER_PATH_KEY = "-I";

public:
    ~Parser();

    Args Run(int argc, char* argv[]);
};
