/*
    Definisikan struct Kendaraan (merek, tipe, tahun, harga). 
    Isi data 5 kendaraan, lalu tampilkan kendaraan dengan harga termurah 
    beserta merek dan tahunnya.
*/
#include <iostream>
using namespace std;

struct kendaraan {
    string merek;
    string tipe;
    int tahun;
    int harga;
};


int main() {
    kendaraan k[5] = {
        {"Toyota", "SUV", 2020, 100000000},
        {"Honda", "SUV", 2021, 200000000},
        {"BMW", "SUV", 2020, 300000000},
        {"Ferari", "SUV", 2020, 500000000},
        {"lambo", "SUV", 2020, 700000000},
    };

    int termurah = 0;

    for (int i = 1; i < 5; i++) {
        if (k[i].harga < k[termurah].harga) {
            termurah = i;
        }
    }

    cout << " merek mobil: " << k[termurah].merek << " tipe mobil: " << k[termurah].tipe << " harga mobil: " << k[termurah].harga << endl;  
}
