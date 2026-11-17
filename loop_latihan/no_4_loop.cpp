#include <iostream>
using namespace std;

int main() {

    const int n = 100;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            cout << i << " adalah bilangan prima" << endl;
        }
        cout << endl;
    } 
}