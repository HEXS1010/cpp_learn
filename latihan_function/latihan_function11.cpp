#include <iostream>
#include <string>
using namespace std;

/*
    Buatlah function untuk menentukan apakah sebuah bilangan termasuk ganjil atau genap. 
    Function menerima satu parameter dan mengembalikan hasil berupa teks.
*/

string ganjilGenap(int a) {
    if (a % 2 == 0) {
        return "genap";
    } else {
        return "ganjil";
    }
};

int main() {
    string hasil = ganjilGenap(5);
    cout << hasil << endl;

    // ganjilGenap(4);

    return 0;
}