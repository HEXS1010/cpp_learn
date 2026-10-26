#include <iostream>

using namespace std;

int main() {
   const int n = 5;
    int arr[n] = {10, 20, 30, 40,50};

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        
    }

    cout << "Maximum value: " << max << endl;
    cout << "Minimum value: " << min << endl;

}