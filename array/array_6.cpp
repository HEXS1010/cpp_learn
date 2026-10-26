#include <iostream>
using namespace std;

int main() {
    const int p = 5;
    int nilai[p] = {10,20,30,40,10};
    int query = 10;
    int counter = 0;

    for (int i = 0; i < p; i++) {
        if (nilai[i] == query) {
            counter++;
        }
    }
    cout << "nilai " << query << " muncul sebanyak " << counter << " kali" << endl;
    return 0;
}