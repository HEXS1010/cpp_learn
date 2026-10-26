#include <iostream>
using namespace std;

int main() {
    const int p = 5;
    int sum = 0;

    int nilai[p] = {19,20,30,40,50};

    for (int i = 0; i < p; i++) {
        sum += nilai[i];
    } 

    float mean = sum/p;

    cout << mean << endl;


    cout << "mean: " << mean << endl;
    

    
}