#include <iostream>
using namespace std;

/* 
    Buat function luasLingkaran(r) dan kelilingLingkaran(r), 
    lalu panggil dari main.

*/

float luasLingkaran(int r) {
    return 3.14 * r * r;
};

float kelilingLingkaran(int r) {
    return 2 * 3.14 * r;
};

int main() {

    cout << luasLingkaran(7) << endl;
    cout << kelilingLingkaran(7) << endl;
    return 0;
}