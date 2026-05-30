#include <iostream>
using namespace std;

int main() {
    int money = 500;

    cout << "how much balance you have :"; 
    cin >> money;



    if (money >= 1000) {
        cout << "I will buy a pizza";
    } 
    
    else {
        cout << "I will buy a burger";
    }
    
    return 0;
}


