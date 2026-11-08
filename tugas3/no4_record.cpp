#include <iostream>
using namespace std;

struct Alamat {
    string kota;
    int kode_pos;
};

struct mahasiswa {
    string nama;
    Alamat alamat;

};

int main() {
    mahasiswa m[3] = {
        {"siti", {"Denpasar", 810}},
        {"budi", {"Bandung", 811}},
        {"siti", {"Jakarta", 812}},
    };

    for (int i = 0; i < 3; i++) {
        cout << "nama mahasiswa: " << m[i].nama << " kota asal: " << m[i].alamat.kota << endl;  
    }

    
}