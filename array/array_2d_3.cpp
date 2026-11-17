#include <iostream>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;

    int sum_rows;
    int sum_cols;
    int sum_matrix = 0;

    int matrix[rows][cols] = {
        {4, 7, 10},
        {11, 3, 9},
        {8, 12, 2}
    };

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum_matrix += matrix[i][j];
        }    
    }
    cout << sum_matrix << " ";

    cout << endl;

    for (int i = 0; i < rows; i++) {\
        sum_rows = 0;
        for (int j = 0; j < cols; j++) {
            sum_rows += matrix[i][j];
        }
        cout << "Jumlah baris ke-" << i + 1 << ": " << sum_rows << endl;
    }

    cout << endl;

    for (int j = 0; j < cols; j++) {
        sum_cols = 0;
        for (int i = 0; i < rows; i++) {
            sum_cols += matrix[i][j];
        }
        cout << "Jumlah kolom ke-" << j + 1 << ": " << sum_cols << endl;
    }

}