#include <iostream>

int x = 10;

int main() {
    int x = 20;

    std::cout << "Nilai x lokal: " << x << std::endl;

    std::cout << "Nilai x global: " << ::x << std::endl;

    return 0;
}