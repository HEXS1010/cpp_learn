#include <iostream>
using namespace std;

/*
    Buatlah function yang menerima sebuah bilangan bulat 
    dan mengembalikan nilai kuadrat dari bilangan tersebut.
*/

int bilanganBulat(int a) {
    return a * a;
};

int main() {
    int hasil = bilanganBulat(2);

    cout << hasil << endl;

    return 0;
}