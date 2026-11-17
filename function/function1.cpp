#include <iostream>
using namespace std;

// membuat function untuk penjumlahan

int sum(int a, int b) {
    return a + b;
};

int kuadrat(int x) {
    return x * x;
};

int main() {
    int hasil = sum(3, 7);

    cout << hasil << endl;
    cout << "hasil penjumlahan adalah: " << sum(4, 9) << endl;

    cout << endl;

    cout << kuadrat(5) << endl;
    cout << "hasil kuadrat dari 9: " << kuadrat(9) << endl; 

    return 0;
}