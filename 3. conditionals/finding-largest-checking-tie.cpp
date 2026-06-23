
/*
Problem statement- 
Find the Largest Number and Detect a Tie

Write a program that accepts three integers a, b, and c from the user.

Determine the largest among the three numbers.
If two or more numbers are equal and are the largest value, indicate that there is a tie.
Print the largest number and whether a tie exists.

*/


#include <iostream>
using namespace std;

int main() {

  int a, b, c;
  cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;


    int largest = a;

    if (b > largest) {
        largest = b;
    }

    if (c > largest) {
        largest = c;
    }


    int count = 0;

    if (a == largest) {
        count++;
    }

    if (b == largest) {
        count++;
    }

    if (c == largest) {
        count++;
    }


    cout << "Largest number is: " << largest;

    if (count > 1) {
        cout << " & There's a tie";
    }

    cout << endl;
    
    return 0;
}



/*
Breakdown- 

How it works

Suppose:

a = 10
b = 15
c = 15
Step 1: Find largest
int largest = a;   // 10
if (b > largest)

15 > 10, so:

largest = 15;

Next:

if (c > largest)

15 > 15 is false, so largest remains 15.

Step 2: Count occurrences
count = 0
a == largest   // 10 == 15 -> false
b == largest   // true
count = 1
c == largest   // true
count = 2
Step 3: Check tie
if (count > 1)

2 > 1 is true, therefore:

Largest number is: 15 & There's a tie



The "find largest + count" approach separates the problem into two simple tasks:

Find the maximum.
Check whether multiple numbers share that maximum.
*/



/*

Concept-

'='  and  '==' both are different 

= is an assignment operator,  int a = 10;  meaning store value 10 in variable a 

== is an equality operator, it checks whether two values are equal or not,   if (a == 10) means check if a = 10 or not 


*/


/*

Other Operators- 

| Operator | Meaning                  |
| -------- | ------------------------ |
| `==`     | Equal to                 |
| `!=`     | Not equal to             |
| `>`      | Greater than             |
| `<`      | Less than                |
| `>=`     | Greater than or equal to |
| `<=`     | Less than or equal to    |


*/