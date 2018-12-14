#include <iostream>

#include "example-subdirectory/example.h"

int main(int argc, char **argv) {

    std::cout << "Hello, World" << std::endl;

    int one = piper::example::ExampleReturnOne();

    return 0;
}