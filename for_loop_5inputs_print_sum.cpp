


// Probelm statement- Take 5 inputs and print their sum
// It is called Accumulation Pattern 

/*
The main idea is:

Take numbers one by one using a loop
Keep adding them into a variable called sum

Suppose user enters -  2 4 6 8 10
you need   -   2 + 4 + 6 + 8 + 10 = 30

So:
Create a variable sum
Initially set it to 0
Every time user enters a number:
add it to sum

*/


#include <iostream>
using namespace std;

int main() {

  int num;
  int sum = 0;

  
  cout << "Enter 5 nos: ";

  for(int i = 1; i <= 5; i++) {

  cin >> num;

  sum = sum + num;

}

cout << "Sum = " << sum;

return 0;
}




/*

How it works-
int sum = 0;    - we create a variable to store the local 
initially sum = 0
Loop runs 5 times    -  for(int i = 1; i <= 5; i++)
take input   -   cin >> num;
add number to the sum    -    sum = sum + num;

Example:
sum = 0
user enters 5
new sum = 0 + 5 = 5

Then:
user enters 3
new sum = 5 + 3 = 8
and so on.

instead of sum = sum + num ,   u can write-    sum += num;


VERY IMP U LEARNED, AND WILL BE USED EVERYWHERE that is- 
sum = sum + something;

Later this becomes:
array sums
averages
prefix sums
counting frequency
many DSA problems

*/


    