#include <iostream>
using namespace std;

int main() {
    float pi, r, luas;
    pi = 3.14; 

    cout << "Tugas luas lingkaran" << endl;
    cout << "masukan jari jari lingkaran: "; 
    cin >> r;

    luas = pi * r * r;

    cout << "luas lingkaran: " << luas << endl;
    return 0;
}