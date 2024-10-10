#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        throw std::runtime_error("Incorrect arguments to execute the command");
    }

    return 0;
}