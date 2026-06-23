

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

  int a, b, c;
  cout << "Enter three integers: ";
  cin >> a >> b >> c;

  // if (a >= b && a >= c) {
  //   cout << "Largest integer is: " << a;

  //  if (a == b && a == c) {
  //     cout << " (All integers are equal)";
  //   } 
  // }

  // else if (b >= a && b >= c) {
  //   cout << "Largest integer is: " << b;

  //   if (b == a && b == c) {
  //     cout << " (All integers are equal)";
  //   }
  // }

  // else if (c >= a && c >= b) {
  //   cout << "Largest integer is: " << c;

  //   if (c == a && c == b) {
  //     cout << " (All integers are equal)";
  //   }
  // }

  // cleaner version of code-


  if (a >= b && a >= c) {
    cout << "Largest integer is: " << a;
    if (a == b && a == c) {
      cout << " (All integers are equal)";
    }
  }

  else if (b >= a && b >= c) {
    cout << "Largest integer is: " << b;
    if (b == a && b == c) {
      cout << " (All integers are equal)";
    }
  }
  
  else {
    cout << "Largest integer is: " << c;
    if (c == a && c == b) {
      cout << " (All integers are equal)";
    }       
  } 

    
    return 0;
}


