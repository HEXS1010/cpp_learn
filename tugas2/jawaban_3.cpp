#include <iostream>
using namespace std;

int main() {
    const int q = 6;
    int value[q] = {1, 2, 3, 4, 5, 5};

    int max1 = -1;
    int max2 = -1;

    for (int i = 0; i < q; i++) {
        if (value[i] > max1) {
            max2 = max1;
            max1 = value[i];
        } else if (value[i] > max2 && value[i] != max1) {
            max2 = value[i];
        }
    }

    cout << "bilangan terbesar 1: " << max1 << endl;
    cout << "bilangan terbesar 2: " << max2 << endl;
}