#include <io/models/args.h>
#include <io/parser.h>

int main(int argc, char* argv[]) {
    auto args = io::Parser::Run(argc, argv);

    return 0;
}