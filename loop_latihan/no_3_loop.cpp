#include <iostream>
using namespace std;

int main() {
    const int n = 4;

    int number[4] = {1, 2, 3, 4};

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << number[j - 1] << " ";
        }
        cout << endl;
    }
}