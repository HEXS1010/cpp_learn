#include <iostream>
using namespace std;

// array sebagai parameter 

double rataRata(int a[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) total += a[i];
    return (double)total / n;
};

void kaliDua(int a[], int n) {
    for (int i = 0; i < n; i++) a[i] *= 2; 
};

int main() {
    int d[4] = {10, 20 , 30, 40};
    cout << rataRata(d, 4) << endl;

    return 0;
}