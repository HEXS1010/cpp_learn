/*
    Definisikan struct Siswa (nama, nilai tugas, nilai UTS, nilai UAS). 
    Hitung nilai akhir setiap siswa dengan ketentuan:
        - Nilai tugas: 30%
        - Nilai UTS: 30%
        - Nilai UAS: 40%
    Tampilkan nama, nilai akhir, dan status kelulusan. 
    Siswa dinyatakan lulus jika nilai akhir minimal 75.

*/

#include <iostream>
using namespace std;

struct siswa {
    string nama;
    float tugas;
    float UTS;
    float UAS;
};

int main() {
    siswa s[3] = {
        {"budi", 90, 80, 85},
        {"siti", 100, 70, 70},
        {"udin", 90, 60, 55}
    };

    
    for (int i = 0; i < 3; i++) {
        float nilai_akhir = (s[i].tugas * 0.3) + (s[i].UTS * 0.3) + (s[i].UAS * 0.4);
        if (nilai_akhir >= 75) {
            cout << "Nama mahasiswa: " << s[i].nama << " nilai akhir: " << nilai_akhir << " status: lulus" << endl;
        } else {
            cout << "Nama mahasiswa: " << s[i].nama << " nilai akhir: " << nilai_akhir << " status: tidak lulus" << endl;
        }
    }
}