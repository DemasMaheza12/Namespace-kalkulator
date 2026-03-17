#include <iostream>

// Membuat namespace khusus untuk operasi kalkulator
namespace Kalkulator {
    double tambah(double a, double b) {
        return a + b;
    }

    double kurang(double a, double b) {
        return a - b;
    }

    double kali(double a, double b) {
        return a * b;
    }

    double bagi(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cout << "Error: Pembagian dengan nol tidak diizinkan!\n";
            return 0;
        }
    }
}

int main() {
    double angka1, angka2;
    char operasi;

    std::cout << "=== Program Kalkulator dengan Namespace ===\n";
    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1;

    std::cout << "Masukkan operator (+, -, *, /): ";
    std::cin >> operasi;

    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    std::cout << "\nHasil: ";
    
    // Memanggil fungsi dari dalam namespace Kalkulator menggunakan ::
    switch (operasi) {
        case '+':
            std::cout << Kalkulator::tambah(angka1, angka2);
            break;
        case '-':
            std::cout << Kalkulator::kurang(angka1, angka2);
            break;
        case '*':
            std::cout << Kalkulator::kali(angka1, angka2);
            break;
        case '/':
            // Jika pembagian dengan nol, fungsi di dalam namespace akan menangani errornya
            if (angka2 != 0) {
                std::cout << Kalkulator::bagi(angka1, angka2);
            } else {
                Kalkulator::bagi(angka1, angka2); 
            }
            break;
        default:
            std::cout << "Operator tidak dikenali!";
    }
    
    std::cout << "\n===========================================\n";

    return 0;
}