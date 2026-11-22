#include <iostream>
using namespace std;

/*
    Buatlah procedure untuk menghitung jumlah seluruh elemen dalam sebuah array, 
    kemudian tampilkan hasil penjumlahannya.
*/

int total = 0;

void jumlahArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        total += a[i];
    }
};

int main() {
    int g[5] = {10, 20, 30, 40, 50};

    jumlahArray(g, 5);

    cout << total << endl;

    return 0;
}