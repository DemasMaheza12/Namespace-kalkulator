#include <iostream>

namespace {
    int secretValue = 42;

    void showSecret() {
        std::cout << "Secret value is: " << secretValue << std::endl;
    }
}

int main() {
    showSecret();

    return 0;
}