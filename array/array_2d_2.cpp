#include <iostream>

using namespace std;

int main() {
    //  baris, kolom
    const int rows = 3;
    const int cols = 2;

    int matrix[rows][cols] = {
        {0, 2},
        {9, 20},
        {1, 5}
    };

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << ",";
        }
        cout << endl;
    }
    

    return 0;
}