#include <iostream>

using namespace std;

int main() {
    string firstName = "budiono";
    string lastName = "siregar";

    string fullName = firstName + " " + lastName;
    cout << fullName << endl;

    // atau bisa menggunakan append() ini akan memindahkan string ke belakang

    string name = "anjay";
    name.append(" mabar");
    cout << name << endl;

    return 0;
}
