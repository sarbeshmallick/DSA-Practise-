
// Problem Statement-  take input of 10 numbers and print it   OR   Print all the numbers from 1 to 10 

// when certain no. of things are repeated use LOOPS 

/*
here we can use Loops 
instead of writing 10 nos 

if we are not writing loops then-
int main() {
int num1, num2, num3, num4...num10;
cout << "enter no";
cin >> num1 >> num2 >> ...num10;
}

*/

#include <iostream>
using namespace std;

int main() {

  for (int i = 1; i <= 10; i++) {
    cout << i << endl;
  }

    
    return 0;
}






/*

is i a variable over here in code ?

int i = 1 is just an initializer 
for (int i = 1;i<=2)  - if user type 1 or 2 as input  then the 1st condition gets TRUE 
for (int i = 1;i<=2;i++)   - is user type 2 or 3 it will work as (i++ means i = i + 1)


first one is initializer, 2nd one is break statement, third one is increment/decrement 

for (int i = 1; i = i + 1)  - no condition, always checks in. This is INFINITE LOOP , prog dosen't know when to stop and keep revolving around for 
  & will never reach last condition that is return 0;

for (int i = 1; i<=2;)   - Again Infinite loop as I failed to give increment then aslo it will not stop because i will always be 1 and 2nd condition is always be true 

for (int i = 1;true;i++;)  - Again Infinite loop 

that's why you need to give valid BREAK'S statement which gonna be false at some moment 

for(initialization; condition; update)
for(int i = 1;  i <= 10;    i++)


*/



/*

#include <iostream>
using namespace std;

int main() {

  int num1, num2, num3, num4;

cout << "enter no";

cin >> num1 >> num2 >> num3 >> num4;

cout << num1 << '\n' << num2 << endl << num3 << endl << num4;
    
    return 0;
}

*/