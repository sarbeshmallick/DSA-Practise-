
// Problem stat- ask input of age and name from user and output it 

#include <iostream>
using namespace std;

int main() {

    int age;
    string name;
    
    cout << "enter your age: ";
    cin >> age;

    cin.ignore();
     
    cout << "enter your name: ";
    getline(cin, name);

    cout << age << endl;
    cout << name;

    return 0;
}