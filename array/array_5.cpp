#include <iostream>

using namespace std;

int main() {
    const int p = 5;
    int nilai[p] = {10,20,30,40,10};
    int query = 10;
    bool found = false;
    int idx_found = -1;


    for (int i = 0; i < p; i++) {
        if (nilai[i] == query) {
            found = true;
            idx_found = i;
            break;
        }
    }

    if (found) {
        cout << "nilai " << query << " ditemukan di indeks " << idx_found << endl;
    } else {
        cout << "nilai " << query << " tidak ditemukan" << endl;
    }    
}