/*
    Definisikan struct Atlet (nama, cabang olahraga, jumlah medali emas, jumlah medali perak). 
    Masukkan data 5 atlet, lalu:
        - Hitung total seluruh medali emas.
        - Tampilkan atlet dengan medali emas terbanyak.
        - Tampilkan jumlah atlet yang memiliki minimal 1 medali emas.
*/

#include <iostream>
using namespace std;

struct atlet {
    string nama;
    string cabang_olahragra;
    int jumlah_medali_emas;
    int jumlah_medali_perak;
};

int main() {
    atlet a[5] = {
        {"budi", "renang", 9, 1},
        {"siti", "basket", 3, 2},
        {"raju", "bulu tangkis", 7, 8},
        {"muliyono", "panjat tebing", 5, 3},
        {"wowo", "wushu", 3, 1},

    };

    int total_medali_emas = 0;
    int medali_emas_terbanyak = 0;
    int minimal_1_medali_emas = 0;

    for (int i = 0; i < 5; i++) {
        total_medali_emas += a[i].jumlah_medali_emas;
        if (a[i].jumlah_medali_emas > a[medali_emas_terbanyak].jumlah_medali_emas) {
            medali_emas_terbanyak = i;
        }
        if (a[i].jumlah_medali_emas >= 1) {
            minimal_1_medali_emas++;
        }
    }

    cout << "Total medali emas seluruh cabang: " << total_medali_emas << endl;
    cout << "medali emas terbanyak: " << a[medali_emas_terbanyak].jumlah_medali_emas << " " << " atas nama: " << a[medali_emas_terbanyak].nama << endl;
    cout << "jumlah atlet yang memiliki minimal 1 medali emas: " << minimal_1_medali_emas << endl;
}