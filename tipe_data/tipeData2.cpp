#include <iostream>
using namespace std;
int main() {

    // tipe data number
    // int (integer) bilang bulat entah positif atau negatif (jumlah barang, umur, siswa)
    // short adalah bilangan bulat dengan ukuran lebih kecil dari int (jumlah barang, umur, siswa)
    // long adalah bilangan bulat dengan ukuran lebih besar dari int (jumlah penduduk)
    // long long adalah bilangan bulat dengan ukuran lebih besar dari long (jumlah uang, penduduk)
    // char adalah kode huruf atau simbol yang hanya menyimpan 1 karakter saja

    // float adalah bilangan desimal atau koma
    // double adalah bilangan desimal atau koma dengan presisi lebih tinggi dari float (tinggi, jarak, hasil perhitungan matematika)

    int a = 23;
    cout << a << endl;
    
    short b = 12; // umur
    cout << b << " tahun" << endl;

    long c = 2000000000; // jumlah penduduk
    cout << c << " orang" << endl;

    long long d = 2000000000000; // jumlah uang
    cout << d << " rupiah" << endl;

    char e = 'A'; // huruf biasa
    cout << e << " 1 karakter" << endl;


    float f = 22.5;
    cout << f << endl;
    
    double g = 33.7;
    cout << g << endl;

}