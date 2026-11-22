#include <iostream>
using namespace std;

/*
    Buatlah procedure untuk menampilkan seluruh bilangan dari 1 sampai N. 
    Nilai N diperoleh melalui parameter.

*/

void perulangan(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
};

int main() {
    perulangan(5);

    return 0;
}