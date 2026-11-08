#include <iostream>
using namespace std;

struct person {
    string name;
    int age;
    string country;
};

int main() {
    person p1 = {"jhon doe", 30, "USA"};
    person p2;

    cin >> p2.name >> p2.age >> p2.country;

    person p3 = p1;
    p3.name = "citra";
    cout << p1.name << " " << p3.name << endl;
    return 0;
}