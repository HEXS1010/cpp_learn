#include <iostream>

using namespace std;

int main() {
    //  baris, kolom
    const int rows = 3;
    const int cols = 3;
    int array[rows][cols] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}