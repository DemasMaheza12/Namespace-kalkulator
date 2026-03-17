#include <iostream>
using namespace std;

namespace kalkulator {
    double tambah(double angka1, double angka2) {
        return angka1 + angka2;
    }
    double kurang(double angka1, double angka2) {
        return angka1 - angka2;
    }
    double kali(double angka1, double angka2) {
        return angka1 * angka2;
    }
    double bagi(double angka1, double angka2) {
        return angka1 / angka2;
    }    
}

int main() {
    int menu;
    double angka1, angka2;
    char operasi;

    do
    {
        cout << "====KALKULATOR NAMESPACE====" << endl;
        cout << "1. Kalkulator" << endl;
        cout << "2. Keluar" << endl; 
        cout << "Pilih opsi: " ;
        cin >> menu;

        if (cin.fail())
        {
            cout << "Input tidak valid, harap masukkan angka!" << endl << endl;
            cin.clear();
            cin.ignore(100, '\n');
            continue;
        }
        
        cin.ignore(100, '\n');

        if (menu == 1)
        {
            cout << "====KALKULATOR NAMESPACE====" << endl;
            cout << "Masukkan angka pertama: ";
            cin >> angka1;
                
            cout << "Pilih operator(+, -, *, /): ";
            cin >> operasi;

            cout << "Masukkan angka kedua: ";
            cin >> angka2;

            cout << "Hasilnya: ";
            switch (operasi)
            {
            case '+' :
                cout << kalkulator::tambah(angka1, angka2);
                break;
            case '-' :
                cout << kalkulator::kurang(angka1, angka2);
                break;                
            case '*' :
                cout << kalkulator::kali(angka1, angka2);
                break;
            case '/' :
                if (angka2 == 0)
                {
                    cout << "Tidak terdefinisi";
                } else {
                    cout << kalkulator::bagi(angka1, angka2);
                }
                break;             
            default:
                cout << "Error" << endl;
            }
            cout << endl << endl;  
        }
        else if (menu == 2) {
            cout << "Keluar dari program. Terima kasih!" << endl;
        }
        else {
            cout << "Harap pilih yang ada di opsi!" << endl << endl;
        }
    } while (menu != 2);
    
    return 0;
}