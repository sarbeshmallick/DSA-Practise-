

// Problem Statement- Take 5 numbers from us and print them and store it in an Array 


/*
Old code- 

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

which is fine but will be a problem when I need to process the array like finding the largest array 

here i am doing 
Input -> Print 
Input -> Print
Input -> Print 


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


*/





// 2 Loop Version:- 


# include<iostream>
using namespace std;

int main() {

int num[5];

for(int i = 0; i < 5; i++) {
    cin >> num[i];
}

for(int i = 0; i < 5; i++) {
    cout << num[i] << "\n";
}

return 0; 

}




/*

Two Loop system- 
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