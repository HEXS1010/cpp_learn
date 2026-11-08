#include <iostream>
using namespace std;

struct person {
    string name;
    int age;
    string country;
};

int main() {
    // array bertipe record

    person p[3] = {
        {"jhon doe", 30, "USA"},
        {"citra", 25, "Indonesia"},
        {"mike", 28, "Canada"}
    };

    p[0] = {"jhon doe", 30, "USA"};

    cout << p[1].name << endl;
    p[2].age = 30;

    cout << p[2].age << endl;




    return 0;
}