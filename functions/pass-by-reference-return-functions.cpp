
// Pass by reference using returning functions

#include <iostream>
using namespace std;

int change(int &x) {
    x = 100;
    return x;
}


int main() {

  int num = 10;

cout << change(num) << endl;
cout << num;

  return 0;
}


/*

Output- 
100
100



Initally:
num = 10 

Call:
change(num);

Reference:
x refers to num

inside function:
x = 100;

Since x and num are same varibales-
num = 100

Return:
return x;
returns 100 


Output-
100
100 

Returned value = 100
Original variable = 100



*/

