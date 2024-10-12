#include <iostream>

#include <parser.h>

int main(int argc, char* argv[]) {
    auto args = Parser().Run(argc, argv);

    return 0;
}