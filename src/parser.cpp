#include <parser.h>

Parser::~Parser() {}

// TODO: Проверка на переданную "." (путь текущей папке)
Args Parser::Run(int argc, char* argv[]) {
    if (argc < 2) {
        throw std::runtime_error("Incorrect arguments to execute the command");
    }

    Args result;
    result.SourcePath = argv[1];

    if (argc < 3) {
        result.HeaderPathList.push_back(result.SourcePath);
        return result;
    }

    for (int i = 2; i < argc; i++) {
        if (argv[i] == HEADER_PATH_KEY) {
            if (i + 1 == argc) {
                throw std::runtime_error("Expect header path after \"-I\"");
            }

            i++;
            result.HeaderPathList.push_back(argv[i]);
            continue;
        }

        continue;
    }

    return result;
}