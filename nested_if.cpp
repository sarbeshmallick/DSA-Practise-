
/*

You are given three integers a, b and c
print which of these integers are largest 
if two or more integers are equal and are the largest, print any of them
the program should indicate that as well , user will input the 3 integers at runtime

*/





#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    // taking input from user
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // nested if-else starts
    if (a >= b) {

        if (a >= c) {

            if (a == b || a == c) {
                cout << "Largest number is " << a << " and there is a tie";
            }
            else {
                cout << "Largest number is " << a;
            }

        }
        else {
            cout << "Largest number is " << c;
        }

    }
    else {

        if (b >= c) {

            if (b == c) {
                cout << "Largest number is " << b << " and there is a tie";
            }
            else {
                cout << "Largest number is " << b;
            }

        }
        else {
            cout << "Largest number is " << c;
        }

    }

    return 0;
}



/*

In this code, we are taking three integers as input from the user and then using nested if-else statements to find the largest number among them. The outer if-else statement compares the first two numbers (a and b) and then the inner if-else statements compare the largest of the first two numbers with the third number (c) to determine the largest number. Additionally, we also check for ties when two or more numbers are equal and print a message accordingly.

Example Run:-
Enter three numbers: 45 90 12
Largest number is 90

Enter three numbers: 78 78 50
Largest number is 78 and there is a tie

What is Nested if-else?
A nested if-else means:
👉 an if statement inside another if statement.
So first outer condition checks, then inner condition checks.
Example:
if (condition1) {

    if (condition2) {
        // code
    }

}

Important Learning
Outer if  - Narrows down possibilities.
Inner if   -  Does more detailed checking.
That is exactly how nested conditions work.



Important Concept
This:
int a = 36;  -  is called hardcoded value. and are fixed and cannot be changed at runtime unless u change the code and recompile it.
But this:
cin >> a;    -  “Take value from the user at runtime” - is called dynamic input.

*/




