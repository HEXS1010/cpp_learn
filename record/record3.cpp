#include <iostream>
using namespace std;

struct person {
    string name;
    int age;
    string country;
};

int main() {
    person p[3] = {
        {"jhon doe", 30, "USA"},
        {"citra", 25, "Indonesia"},
        {"mike", 28, "Canada"}
    };

    int oldest = 0;
    for (int i = 1; i < 3; i++) {
        if (p[i].age > p[oldest].age) {
            oldest = i;
        }
    }

    cout << "umur tertua adalah : " << p[oldest].name << " " << p[oldest].age << endl;
}