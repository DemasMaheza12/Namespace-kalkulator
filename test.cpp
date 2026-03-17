#include <iostream>
using namespace std;

int a = 10;

namespace apaya {
    void sayHello() {
        cout << "Haii kamuu" << endl;
    }
}

namespace hayo {
    void sayHello() {
        cout << "ciyee" << endl;
    }
}

namespace {
    void rahasia() {
        cout << "ytta" << endl;
    }
}

namespace katanyaPanjangBanget {
    void ora() {
        cout << "ORAAAAAAAAAAAA!!!!!" << endl;
    }
}

namespace kpb = katanyaPanjangBanget;

int main() {

    using namespace hayo;
    int a = 5;
    apaya::sayHello();

    rahasia();

    sayHello();
    cout << "ini lokal " << a << endl;
    cout << "ini global " << ::a << endl; 

    kpb::ora();

    return 0;
}