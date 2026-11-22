#include <iostream>
using namespace std;

/*
    Buatlah function untuk menentukan bilangan terbesar dari dua bilangan yang diberikan melalui parameter.
*/

int terbesar(int a, int b) {
    int besar = a;
    if (besar > b) {
        return besar;
    } else {
        return b;
    }
}

int main() {
    cout << terbesar(90, 4) << endl;
    return 0;
}