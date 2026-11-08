/*
    Buat dua struct:
        - Penerbit (nama penerbit, kota penerbit).
        - Buku (judul, penulis, tahun, penerbit).
    Masukkan data 3 buku dengan informasi penerbitnya, 
    kemudian tampilkan judul buku beserta nama dan kota penerbitnya.
*/

#include <iostream>
using namespace std;

struct Penerbit {
    string penerbit;
    string kota_penerbit;
};

struct buku {
    string judul;
    string penulis;
    int tahun;
    Penerbit penerbit;
};


int main() {

    buku b[3] = {
        {"anjay_mabar", "budiono", 2020, ("nagasari", "jakarta")},
        {"mabar_anjay", "muliyono", 2016, ("nagaapi", "denpasar")},
        {"makan_bang", "kapal_laut", 2025, ("nagaair", "bandung")},
    };

    for (int i = 0; i < 3; i++) {
        cout << "|judul buku: " << b[i].judul << " | penulis: " << b[i].penulis << " | kota penerbit: " << b[i].penerbit.kota_penerbit << endl;
    }

}