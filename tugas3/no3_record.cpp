#include <iostream>
#include <string>
using namespace std;


struct mahasiswa {
    string nama;
    float ipk;

};

int main() {
    mahasiswa m[5] = {
        {"budi", 2.8},
        {"siti", 2.1},
        {"anjay", 2.2},
        {"hexs", 2.3},
        {"udin", 2.6}
    };

    int total_mahasiswa_peringatan = 0;

    for (int i = 0; i < 5; i++) {
        if (m[i].ipk <= 2.5) {
            cout << "nama mahasiswa: " << m[i].nama << " | status: peringantan" << endl;
            total_mahasiswa_peringatan++;
        }
    }

    cout << endl;
    
    cout << "total mahasiswa peringatan: " << total_mahasiswa_peringatan << endl;
}