#include <iostream>
using namespace std;

int main() {
    float total_belanja, berat_gram, ongkir;

    cout << "============================================" << endl;
    cout << "           KASIR SEDERHANA            " << endl;
    cout << "============================================" << endl;
    
    cout << endl;

    cout << "masukan total belanja: ";
    cin >> total_belanja;
    cout << "masukan berat barang: ";
    cin >> berat_gram;

    cout << endl;
    cout << "============================================" << endl;
    cout << endl;


    if (total_belanja >= 500000) {
        ongkir = 0;
        cout << "ongkir: " << "Rp" << ongkir << endl;
        cout << "total_bayar: " << "Rp" << total_belanja + ongkir << endl;
    } else if (berat_gram <= 1000) {
        ongkir = 10000;
        cout << "ongkir: " << "Rp" << ongkir << endl;
        cout << "total_bayar: " << "Rp" << total_belanja + ongkir << endl;
    } else if (berat_gram > 1000) {
        ongkir = 25000;
        cout << "ongkir: " << "Rp" << ongkir << endl;
        cout << "total_bayar: " << "Rp" << total_belanja + ongkir << endl;
    } else if (berat_gram > 5000) {
        ongkir = 50000;
        cout << "ongkir: " << "Rp" << ongkir << endl;
        cout << "total_bayar: " << "Rp" << total_belanja + ongkir << endl;
    }

    return 0;
}