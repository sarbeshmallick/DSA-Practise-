


// Pass by value by using returning functions 

// problem stat- Write a returning function that accepts an integer by value, changes its local copy, returns the modified value, and show that the original variable in main() is unaffected.



#include <iostream>
using namespace std;

int change(int x) {
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
10 


Initially:
num = 10

Call:
change(num);

Pass by value creates a copy:
num = 10
copy x = 10

Inside function:
x = 100;

Now:
copy x = 100;
num = 10;

Return:
return x;
returns 100 


Ouput:
100
10 

Returned value = 100
Original variable = 10



*/

