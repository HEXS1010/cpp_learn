#include <iostream>
using namespace std;

char nilaiMahasiswa(int a) {
    if (a < 0 || a > 100) {
        return 'N';    
    }
    if (a > 85) {
        int hasil = 'A';
        return hasil;
    } else if (a > 70) { 
        int hasil = 'B';
        return hasil;
    } else if (a > 60) {
        int hasil = 'C';
        return hasil;
    } else {
        int hasil = 'D';
        return hasil;
    }
};

void tampilNilaiMahasiswa(char hasil) {
    if (hasil == 'N') {
        cout << "angka harus dari 0-100" << endl;

    } else {
        cout << "nilai akhir: " << hasil << endl;
    }
};

int main() {
    int nilai = 120;

    char nilaiAkhir = nilaiMahasiswa(nilai);
    tampilNilaiMahasiswa(nilaiAkhir);

    return 0;
}