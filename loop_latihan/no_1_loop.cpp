#include <iostream>
using namespace std;

int main() {
    int bilangan_genap, jumlah_semua_bilangan_genap = 0;

    for (int i = 2; i <= 50; i++) {
        if (i % 2 == 0) {
            bilangan_genap = i;
            jumlah_semua_bilangan_genap += bilangan_genap;
            cout << "bilangan genap: " << bilangan_genap << endl;
            cout << "jumlah semua bilangan genap: " << jumlah_semua_bilangan_genap << endl;
        }
    }
    return 0;
}