#include <iostream>
using namespace std;

struct pegawai {
    string nama;
    int gaji_pokok;
    int tunjangan;
};

int main() {
    pegawai p[3] = {
        {"jhon doe", 3000000, 1000000},
        {"citra", 2500000, 500000},
        {"mike", 2800000, 700000}
    };

    int total = 0;

    for (int i = 0; i < 3; i++) {
        total += p[i].gaji_pokok + p[i].tunjangan;
    };

    cout << "total semua gaji pegawai adalah: " << total << endl;

    int rata_rata = total / 3;

    cout << "rata-rata gaji pegawai adalah: " << rata_rata << endl;
    return 0;
}