#include <iostream>
using namespace std;

// variabel scope

int total = 0;

void tambah(int n) {
    int hasil = n * 2;
    total += hasil;
};

int main() {
    tambah(3);
    tambah(4);
    
    cout << total << endl;

    return 0;
}