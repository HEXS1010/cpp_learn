#include <iostream>
#include <string>
using namespace std;

struct buku {
    string judul;
    string penulis;
    int tahun;
    int harga;
};


int main() {
    buku b[3] = {
        {"anjay_mabar", "budiono", 2020, 100000},
        {"makan_bang", "siregar", 2019, 50000},
        {"bang_makan", "kapal_laut", 2020, 200000}
    };

    int termahal = 0;

    for (int i = 1; i < 3; i++) {
        if (b[i].harga > b[termahal].harga) {
            termahal = i;
        }
    }

    cout << "buku termahal berjudul : " << b[termahal].judul << " dengan harga : " << b[termahal].harga << endl;
}