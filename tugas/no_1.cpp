#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    
    cout << "masukan nilai a: ";
    cin >> a;
    cout << "masukan nilai b: ";
    cin >> b;
    cout << "masukan nilai c: ";
    cin >> c;
    
    int min  = a;

     
    if (b < min) {
        min = b;
    } 
    if (c < min) {
        min = c;
    }

    cout << "nilai terkecil adalah: " << min << endl;
}