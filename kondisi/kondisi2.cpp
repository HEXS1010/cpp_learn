#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "masukan nilai n: ";
    cin >> n; 

    if (n % 2 == 0) {
        cout << "genap" << endl;
    } else {
        cout << "ganjil" << endl;
    } 

    return 0;
}