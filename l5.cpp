#include <iostream>

namespace VeryLongNamespaceName {
    void sayHello() {
        std::cout << "Hello from VeryLongNamespaceName!" << std::endl;
    }
}

namespace VLN = VeryLongNamespaceName;

int main() {
    VLN::sayHello();

    return 0;
}