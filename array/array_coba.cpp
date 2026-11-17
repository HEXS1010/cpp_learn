#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int i = 0; i < n / 2; i++) {
        int tmp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = tmp;
    }
    
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl; // 5 4 3 2 1
    
    return 0;

}