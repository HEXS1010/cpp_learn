#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                cout << matrix[i][j] <<"";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}