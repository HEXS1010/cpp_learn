#include <iostream>
using namespace std;

/*
    Buatlah function untuk menghitung rata-rata dari tiga bilangan. 
    Ketiga bilangan tersebut diberikan melalui parameter.
*/

float mean(float a, float b, float c) {
    return (a + b + c) / 3;
};

int main() {
    cout << mean(2.3, 3, 6) << endl;

    return 0;
}