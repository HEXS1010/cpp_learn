#include <iostream>
using namespace std;

int main() {
    int a, b,c;
    cout << "masukan nilai a: ";
    cin >> a;
    cout << "masukan nilai b: ";
    cin >> b;
    cout << "masukan nilai c: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "ini segitiga sama sisi" << endl;
        } else if (a == b || a == c || b == c) {
            cout << "ini segitiga sama kaki" << endl;
        } else {
            cout << "ini segitiga sembarang" << endl;
        }
    } else {
        cout << "bukan segitiga" << endl;
    }
}