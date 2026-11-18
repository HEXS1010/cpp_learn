#include <iostream>
using namespace std;

bool ganjil(int n) {
  return n % 2 != 0;
};

int main() {
  int d[4] = {20, 19, 49, 25};
  int jumlah = 0;

  int n = 4;

  for (int i = 0; i < n; i++) {
    if (ganjil(d[i])) {
      jumlah++;
    }
  }

  cout << "jumlah angka ganjil: " << jumlah << endl;

  
}