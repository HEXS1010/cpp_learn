#include <iostream>
using namespace std;

int main() {
    const int n = 8;
    int numbers[n] = {5, 7, 10, 25, 1, 4, 55, 8};

    int genap = 0;
    int ganjil = 0;

    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            genap++;
        }
        if (numbers[i] % 2 != 0) {
            ganjil++;
        }
    }
    cout << "jumlah nilai genap: " << genap << endl;
    cout << "jumlah nilai ganjil: " << ganjil << endl;
    return 0;
}