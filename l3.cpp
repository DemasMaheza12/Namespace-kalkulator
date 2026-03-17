#include <iostream>

namespace Alpha {
    void showMessage() {
        std::cout << "Hello from Alpha namespace!" << std::endl;
    }
}

namespace Beta {
    void showMessage() {
        std::cout << "Hello from Beta namespace!" << std::endl;
    }
}

int main() {
    Alpha::showMessage();

    Beta::showMessage();

    return 0;
}