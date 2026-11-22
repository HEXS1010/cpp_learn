#include <iostream>
#include <string>
using namespace std;


/*
    Buatlah procedure bernama perkenalan yang menerima parameter nama dan umur. 
    Procedure tersebut harus menampilkan nama dan umur seseorang
*/

void perkenalan(string nama, int umur) {
    cout << "nama: " << nama << endl;
    cout << "umur: " << umur << endl;
};

int main() {
    perkenalan("aswa", 30);
    return 0;
}