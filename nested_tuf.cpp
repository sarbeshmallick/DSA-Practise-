// nested if else program, although we can do this by if-else 

/*  
You are given three integers a, b and c
print which of these integers are largest 
if two or more integers are equal and are the largest, print any of them
the program should indicate that as well
the 3 integers are 36 56 78 
*/

#include <iostream>
using namespace std;

int main() {

  int a = 36;
  int b = 56;
  int c =78;

  if (a >= b) {

    if (a >= c) {
      cout << "Largest is a";
    }
    else {
      cout << "Largest is c";
    }
  }

  else if (b >= c) {
    cout << "Largest is b";
  } 

  else {
    cout << "Largest is c";
  }   


    return 0;
}



/*

What is Nested if-else?
A nested if-else means:
👉 an if statement inside another if statement.
Example:
if (condition1) {

    if (condition2) {
        // code
    }

}

So first outer condition checks, then inner condition checks.


Visual Structure-
if (a >= b)

    if (a >= c)
        a largest
    else
        c largest

else

    if (b >= c)
        b largest
    else
        c largest

This is the core nested if-else pattern.


Cleaner code with no ties-
if (a >= b) {

    if (a >= c)
        cout << a;
    else
        cout << c;

}
else {

    if (b >= c)
        cout << b;
    else
        cout << c;
}


*/