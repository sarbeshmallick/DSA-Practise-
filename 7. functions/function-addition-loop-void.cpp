
/*

Write a C++ program to create a void function that accepts two integers and prints their sum.

Ask the user how many times the function should be executed, then use a for loop to call the function that many times. Demonstrate code reusability using a void function.

*/


#include <iostream>
using namespace std;


void add2nos() {
   
  int num1, num2;
  cout << "Enter 2 numbers: ";
  cin >> num1 >> num2;
  cout << "The Sum of 2 numbers is: " << num1 + num2 << endl;

}


int main() {
   
  int n;
  cout << "How many times do you want to add two numbers? ";
  cin >> n;

  for (int i=0; i < n; i++) {
    add2nos();
  }

    return 0;

}



/*

Enhancements- 

instead of How many times do you want to add two numbers?
we can write:
How many times do you want to perform the addition?   OR   How many pairs of numbers do you want to add?

> What if someone enters -5 ?
Your program simply ends. It isn't wrong, but it isn't very user-friendly.
A nicer program would validate the input.

if (n <= 0) {
    cout << "Please enter a positive number.";
}
else {
    for (int i = 0; i < n; i++) {
        add2nos();
    }
}


*/