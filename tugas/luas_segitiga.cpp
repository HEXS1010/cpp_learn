#include <iostream>
using namespace std;

int main() {
    float a, t, luas;

    cout << "Tugas luas segitiga" << endl;

    cout << "masukan alas segitiga: "; 
    cin >> a;

    cout << "masukan tinggi segitiga: ";
    cin >> t;

    luas = 0.5 * a * t;

    cout << "luas segitiga: " << luas << endl;
    return 0;
}