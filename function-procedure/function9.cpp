#include <iostream>
using namespace std;

long long fakt(int n) {
    if (n <= 1) return 1;
    return n * fakt(n - 1);
};

int main() {
    cout << fakt(4) << endl;
    return 0;
}