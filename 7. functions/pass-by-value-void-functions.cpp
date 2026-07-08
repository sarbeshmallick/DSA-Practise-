
// prblm stat- Write a void function that accepts an integer by value, changes its value inside the function, and demonstrate that the original variable in main() remains unchanged.


#include <iostream>
using namespace std;


void change(int x) {
    x = 100;
}

int main() {
    int num = 10;

    change(num);

    cout << num;
}
