#include <iostream>

namespace MyNamespace {
    void sayHello() {
        std::cout << "Hello from MyNamespace" << std::endl;
    }
}

int main() {
    using namespace MyNamespace;

    sayHello();

    return 0;
}