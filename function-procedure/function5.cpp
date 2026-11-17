#include <iostream>
using namespace std;

// pass by reference = bekerja pada variabel aslinya (menukar variabel)
void ubah(int &angka) {
    angka = 100;
};

void tukar(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int nilai = 10;

    ubah(nilai);

    cout << nilai << endl;

    int a = 10;
    int b = 20;

    tukar(a, b);

    cout << a << " " << b << endl;

    return 0;
}