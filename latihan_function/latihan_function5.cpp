#include <iostream>
using namespace std;

int luasPersegi(int s) {
  return s * s;
};

int main() {
  int hasil = luasPersegi(3);

  cout << "hasil dari sisi persegi: " << hasil << endl;
}