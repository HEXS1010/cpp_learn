#include <iostream>
using namespace std;

void hitungTotal(int a[], int n, int &total) {
    for (int i = 0; i < n; i++) total += a[i];
};

int main() {
  int g[5] = {30, 50, 10, 100, 60};
  int total = 0;
    
  hitungTotal(g, 5, total);
  cout << total << endl;
  
}