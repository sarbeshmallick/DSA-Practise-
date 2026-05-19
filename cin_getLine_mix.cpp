#include <iostream>
using namespace std;

int main() {

    int age;
    string name;

    cin >> age;

    cin.ignore();

    getline(cin, name);

    cout << age << endl;
    cout << name;

    return 0;
}