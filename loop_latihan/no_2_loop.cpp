#include <iostream>
using namespace std;

int main() {
    const int n = 5;

    int number[5] = {3, 5, 9, 10, 7};

    int max = number[0];
    int min = number[0];

    for (int i = 0; i < n; i++) {
        if (number[i] > max) {
            max = number[i];
        }
        if (number[i] < min) {
            min = number[i];
        }
    }
    cout << "bilangan terbesar: " << max << endl;
    cout << "bilangan terkecil: " << min << endl;
    return 0;
}