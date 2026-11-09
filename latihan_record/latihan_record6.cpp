/*
    Buat sebuah struct Karyawan dengan atribut:
    nama
    jabatan
    gaji_pokok
    tunjangan

    Masukkan data 5 karyawan, lalu lakukan hal berikut:

    Hitung total seluruh gaji karyawan (gaji pokok + tunjangan).
    Tampilkan karyawan dengan total penghasilan tertinggi.
    Hitung jumlah karyawan yang memiliki total penghasilan di atas Rp5.000.000.
    Hitung rata-rata total penghasilan seluruh karyawan.
*/
#include <iostream>
#include <string>
using namespace std;

struct karyawan {
    string nama;
    string jabatan;
    int gaji_pokok;
    int tunjangan;
};

int main() {
    karyawan k[5] = {
        {"budi", "manager", 7000000, 2000000},
        {"siti", "staff", 2000000, 500000},
        {"anjay", "staff", 2000000, 500000},
        {"udin", "leader", 5000000, 1000000},
        {"ujang", "senior", 9000000, 3000000},
    };

    int total_gaji_semua_karyawan = 0;
    int gaji_diatas_5jt = 0;
    int gaji_tertinggi = 0;

    for (int i = 0; i < 5; i++) {
        total_gaji_semua_karyawan += k[i].gaji_pokok + k[i].tunjangan;
        if (k[i].gaji_pokok + k[i].tunjangan > 5000000) {
            gaji_diatas_5jt++;
        }
    }

    for (int i = 1; i < 5; i++) {
        if ((k[i].gaji_pokok + k[i].tunjangan) > (k[gaji_tertinggi].gaji_pokok + k[gaji_tertinggi].tunjangan)) {
            gaji_tertinggi = i;
        }
    }
 
    int rata_rata = total_gaji_semua_karyawan / 5;

    cout << "total semua gaji karyawan: " << total_gaji_semua_karyawan << endl;
    cout << "rata-rata gaji karyawan: " << rata_rata << endl;
    cout << "jumlah karyawan yang memiliki gaji diatas 5JT: " << gaji_diatas_5jt << endl;
    cout << "karyawan yang memiliki gaji tertinggi: " << k[gaji_tertinggi].gaji_pokok + k[gaji_tertinggi].tunjangan << endl;
}