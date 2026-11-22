#include <iostream>
using namespace std;

/*
    Buatlah function untuk mencari nilai terbesar dari seluruh elemen array dan mengembalikan nilai tersebut.
*/

int terbesar(int a[], int n) {
    int mx = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > mx) {
            mx = a[i];
        }
    }

    return mx;
};

int main() {
    int h[4] = {10, 20, 30, 40};

    cout << terbesar(h, 4) << endl;

    return 0;
}