#include <io/models/args.h>
#include <io/parser.h>

namespace io {

Parser::~Parser() {}

// TODO: Проверка на переданную "." (путь текущей папке)
models::Args Parser::Run(int argc, char* argv[]) {
    if (argc < 2) {
        throw std::runtime_error("Incorrect arguments to execute the command");
    }

    models::Args result;
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

}  // namespace io