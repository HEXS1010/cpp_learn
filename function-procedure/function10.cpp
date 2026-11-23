#include <iostream>
using namespace std;

char nilaiMahasiswa(int a) {
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
    cout << "nilai akhir: " << hasil << endl;
};

int main() {
    int nilai = 70;

    char nilaiAkhir = nilaiMahasiswa(nilai);
    tampilNilaiMahasiswa(nilaiAkhir);

    return 0;
}