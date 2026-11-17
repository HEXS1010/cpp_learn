#include <iostream>
using namespace std;

// studi kasus: program menjadi ringkas dan mudah di pelihara 
char grade(int nilai) {
    // 85 70 55
    if (nilai >= 85) {
        return 'A';
    } else if (nilai >= 70) {
        return 'B';
    } else if (nilai >= 55) {
        return 'C';
    } else {
        return 'D';
    }
};

void tampilkan(int a[], int n) {
    for (int i = 0; i < n; i++) 
    cout << a[i] << " (" << grade(a[i]) << ")\n";
};
int main() {
    int nilai[4] = {90, 72, 55, 40};
    tampilkan(nilai, 4); 
    
    return 0;
}