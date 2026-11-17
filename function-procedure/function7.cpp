#include <iostream>
using namespace std;

// array sebagai parameter 

double rataRata(int a[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) total += a[i];
    return (double)total / n;
};

int kali = 1;

void kaliDua(int a[], int n) {
    for (int i = 0; i < n; i++) kali *= a[i]; 
};

int main() {
    int d[4] = {10, 20, 30, 40};
    cout << rataRata(d, 4) << endl;
    
    
    int r[4] = {10, 20, 30, 40};
    kaliDua(r, 4);
    cout << kali << endl;

    return 0;
}