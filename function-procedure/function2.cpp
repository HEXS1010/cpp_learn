#include <iostream>
#include <string>
using namespace std;

void garis(int n) {
    for (int i = 0; i < n; i++) cout << "-";
        cout << endl;
    
};

void sapa(string nama) {
    cout << "Halo, " << nama << endl;
};

int main() {
    garis(12);
    sapa("Hexs");
    garis(12);
    
    return 0;
}