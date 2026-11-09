/*
    Definisikan struct Film (judul, genre, tahun_rilis, rating). Masukkan data 5 film, lalu:
        - Tampilkan semua film dengan genre "Action".
        - Hitung jumlah film yang dirilis sebelum tahun 2020.
        - Hitung rata-rata rating seluruh film.
        - Tampilkan film dengan rating terendah.
*/

#include <iostream>
#include <string>
using namespace std;

struct film {
    string judul;
    string genre;
    int tahun_rilis;
    float rating;
};

int main() {

    film f[5] = {
        {"anjay_mabar", "action", 2020, 6.6},
        {"mabar_anjay", "action", 2019, 8.9},
        {"azab maling ayam", "romansa", 2018, 4.6},
        {"aku mau dia, dianya gk mau", "romansa", 2020, 7.5},
        {"tukang bakso yang difitnah", "absurd", 2025, 5.6}
    };

    int film_dibawah_tahun_2020 = 0;
    float total_rating_semua_film = 0;
    int rating_paling_rendah = 1;

    cout << "==================== film action =====================" << endl;  
    for (int i = 0; i < 5; i++) {
        if (f[i].genre == "action") {
            cout << "judul: " << f[i].judul << " | genre: " << f[i].genre << " | tahun: " << f[i].tahun_rilis << " | rating: " << f[i].rating << endl;
        }
        if (f[i].tahun_rilis < 2020) {
            film_dibawah_tahun_2020++;
        }
    }
    cout << "======================================================" << endl;
    
    cout << endl; 
    
    cout << "==================== film 2020 =====================" << endl; 
    cout << "jumlah film yang rilis dibawah tahun 2020: " << film_dibawah_tahun_2020 << endl;
    cout << "======================================================" << endl;
    
    cout << endl;

    for (int i = 0; i < 5; i++) {
        total_rating_semua_film += f[i].rating;
        if (f[i].rating < f[rating_paling_rendah].rating) {
            cout << "judul: " << f[i].judul << " | genre: " << f[i].genre << " | tahun: " << f[i].tahun_rilis << " | rating: " << f[i].rating << endl;
        }
    }
    
    float rata_rata = total_rating_semua_film / 5;
    
    cout << "==================== rata-rata rating film =====================" << endl; 
    cout << "rata-rata rating semua film: " << rata_rata << endl;
    cout << "================================================================" << endl;

    return 0;
}