#include <iostream>
using namespace std;

int main() {
    const int p = 10;
    int arr_a[p] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr_b[p];

    for (int i = 0; i < p; i++) {
        arr_b[9 - i] = arr_a[i];        
    }

    for (int i = 0; i < p; i++) {
        cout << arr_b[i] << " ";
    }

    cout << endl;
    return 0;
}