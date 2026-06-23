

// Problem Statement- Take 5 numbers from us and print them and store it in an Array 

/*
int main() {
  int num[5];                                 // As we have intilizaed an empty array but haven't define elemnets it will output garbage elemnets 
  for(int i = 0; i <= 4; i++) {               // Initally we call empty array but then define elements like if int num[3] = {2, 1, 7};
    cout << num[i] << "\n";         
  }        

Output- 
-2
6422280
1996582701                                     // Garbage elements 
4200944
6422352

*/ 

#include <iostream>
using namespace std;

int main() {
  int num[5];    

  for(int i = 0; i <= 4; i++) {  
    cin >> num[i];                  
    cout << num[i] << endl;                             
  }
    
    return 0;
}





/*

Output-    // if you type 1 2 3 4 5 it will print these number 
1
2
3
4
5 

*/


/*

TWO LOOP version- 
- earlier we were just taking a input and printing it and again taking input and printing it 

- we were doing->
Input 1st number
Print it immediately

Input 2nd number
Print it immediately

Input 3rd number
Print it immediately
...

A better logical flow is:
Step 1- Take all inputs and store them.
Step 2- Print all stored values.

This usually means two loops:
Loop 1 -> Input
Loop 2 -> Output


This is how arrays are commonly used in DSA because later you'll often do:
Input
↓
Store
↓
Process
↓
Output


Array = Storage
Loop 1 = Fill Storage
Loop 2 = Traverse Storage


What your code is actually doing

Imagine the user enters:
10 20 30 40 50

Iteration 1:
Store 10 in num[0]
Print 10

Iteration 2:
Store 20 in num[1]
Print 20

Iteration 3:
Store 30 in num[2]
Print 30
and so on.

So the array is being used as storage, but you're not really taking advantage of the fact that the values are already stored.

code-

int num[5];

for(int i = 0; i < 5; i++) {
    cin >> num[i];
}

for(int i = 0; i < 5; i++) {
    cout << num[i] << "\n";
}


User enters- 10 20 30 40 50

First Loop-
Store 10 in num[0]
Store 20 in num[1]
Store 30 in num[2]
Store 40 in num[3]
Store 50 in num[4]

At this point the array looks like this-
Index:  0   1   2   3   4
Value: 10  20  30  40  50

Nothing has been printed yet.

Second loop:
Print num[0] -> 10
Print num[1] -> 20
Print num[2] -> 30
Print num[3] -> 40
Print num[4] -> 50

So this version does:
Input everything
↓
Store everything
↓
Print everything



Input
↓
Store
↓
Traverse
↓
Process
↓
Output
*/
















/*

Note- 

Because arrays start from index 0
So 0 1 2 3 4 
Total = 5 elements 

Important Concept-

int num[5];    // Creates 5 boxes 
| Index | Value |
| ----- | ----- |
| 0     | ?     |
| 1     | ?     |
| 2     | ?     |
| 3     | ?     |
| 4     | ?     |

When user enter values:
it get stored inside--   cin >> num[i];        // user input gets stored in those boxes 

*/