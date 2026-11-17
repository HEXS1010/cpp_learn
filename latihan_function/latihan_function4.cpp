#include <iostream>
using namespace std;

/*
    Tebak keluaran: fungsi void tambah(int x) { x += 5; } dipanggil dengan int a = 1; 
    tambah(a);. Berapa a? Bagaimana jika parameternya int &x?
*/

void tambah(int &x) {
    x += 5;
}


int main() {

    int a = 1;
    tambah(a);
    cout << a << endl;


    return 0;
}