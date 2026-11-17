#include <iostream>
using namespace std;

// parameter pass by value = menerima salinan nilai (salinan dari variabel main)
void tukar(int a, int b) {
    int t = a;
    a = b;
    b = t;
};

int main() {
    int a = 10;
    int b = 20;

    tukar(a, b);

    cout << a << " " << b << endl;



    return 0;
}