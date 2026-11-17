#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 3;
    cout << x / y << " " << x % y << endl;
    cout << x / 3.0 << endl;
    x += 5;
    x++;

    cout << x << endl;

    bool b = (x > 15) && (y < 3);
    cout << b << endl;
    return 0;
}
