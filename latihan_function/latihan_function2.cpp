#include <iostream>
using namespace std;

/*
    Buat function bool genap(int n), 
    lalu gunakan untuk menghitung banyak bilangan genap dalam array.
*/

bool genap(int n) {
    return n % 2 == 0;
};

int main() {
    int e[4] = {10, 17, 18, 27};

    int n = 4;
    int jumlah = 0;
    for (int i = 0; i < n; i++){
        if (genap(e[i])) {
            jumlah++;
        }
    }
    cout << jumlah << endl;

}