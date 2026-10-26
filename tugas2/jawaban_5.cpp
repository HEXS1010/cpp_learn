#include <iostream>

using namespace std;

int main() {
    const int jumlah_mahasiswa = 10;
    int uts[jumlah_mahasiswa] = {80, 50, 60, 90, 40, 55, 70, 45, 95, 88};

    for (int i = 0; i < 10; i++) {
        if (uts[i] >= 60) {
            cout << "siswa yang lulus: " << uts[i] << " indeks ke-" << i << endl;
        }
    }

    return 0;
    
}