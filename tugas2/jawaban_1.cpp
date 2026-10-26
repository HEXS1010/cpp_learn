#include <iostream>

using namespace std;

int main() {

    const int v = 10;
    int  numbers[v] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int mean;
    int sum = 0;
    int nilai_lebih_besar;

    for (int i = 0; i < v; i++) {
        sum += numbers[i];
    }

    mean = sum / v;

    cout << "nilai rata-ratanya: " << mean << endl;

    for (int i = 0; i < v; i++) {
        if (numbers[i] > mean) {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
