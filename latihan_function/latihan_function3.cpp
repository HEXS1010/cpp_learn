#include <iostream>
using namespace std;

/*
    Buat procedure hitungMinMax(int a[], int n, int &mn, int &mx) 
    yang mengisi nilai minimum dan maksimum.
*/

void hitungMinMax(int a[], int n, int &mn, int &mx) {
    
    mn = a[0];
    mx = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < mn) {
            mn = a[i];
        }
        if (a[i] > mx) {
            mx = a[i];
        }
    }
};

int main() {
    int d[5] = {10, 20, 30, 40, 50};

    int mn, mx;

    hitungMinMax(d, 5, mn, mx);

    cout << "nilai minimum: " << mn << endl;
    cout << "nilai maksimum: " << mx << endl;

}