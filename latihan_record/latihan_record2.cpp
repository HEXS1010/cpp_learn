/*
    Buat struct Produk (nama, harga, stok). Isi data 5 produk, 
    lalu tampilkan produk yang stoknya kurang dari 10 beserta jumlah produk yang 
    stoknya kurang dari 10.
*/

#include <iostream> 
using namespace std;

struct produk {
    string nama;
    int harga;
    int stok;
};

int main() {
    produk p[5] = {
        {"beng-beng", 2000, 8},
        {"yupi", 500, 30},
        {"aqua", 4000, 7},
        {"coklat", 20000, 9},
        {"permen", 1000, 40}
    };

    int total_produk_kurang_dari_10 = 0;

    for (int i = 0; i < 5; i++) {
        if (p[i].stok < 10) {
            cout << " nama produk: " << p[i].nama << " jumlah stok: " << p[i].stok << endl;
            total_produk_kurang_dari_10++;
        };
    };

    cout << " jumlah produk yang kurang dari 10: " << total_produk_kurang_dari_10 << endl;


}