#include <iostream>
using namespace std;

/*
    Buatlah procedure untuk menampilkan seluruh isi array bilangan bulat. 
    Jumlah elemen array diberikan melalui parameter.
*/

void bulat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
};

int main() {
    int d[4] = {20, 10, 57, 79};

    bulat(d, 4);
    return 0;
}