

#include <iostream>
using namespace std;

void changeRealValue(int &x) {                             // Note the '&'
    x = 100;                                             // Changes the actual variable
}

int main() {
    int num = 10;
    changeRealValue(num);
    cout << num;                                    // Output: 100 (It changed!)
}



/*


int num = 10;    ->    Memory, num = 10 


int &x   (as there is & , x becomes num) 
x becomes another name for num.
num ─────┐
         │
         ▼
        10
         ▲
         │
x ───────┘

Both names point to the same variable.


Inside the function:

x = 100;
There is no copy.

So this actually means
num = 100;



then } comes and end of void code 
Since it's a void function,

it simply says "I'm done."

It returns control to main(), not a value.

Every function returns control to the caller. Only non-void functions also return a value.


Back to main():

cout << num;

Since num was modified,
Output: 100





Compare these two:

Pass by Value-

void change(int x)
{
    x = 100;
}


num = 10

↓

copy x = 10

↓

x = 100

↓

function ends

↓

x disappears

↓

num is still 10



Pass by reference- 

void change(int &x)
{
    x = 100;
}


num = 10

↓

x becomes another name for num

↓

x = 100

↓

num becomes 100

↓

function ends

↓

x disappears

↓

num is STILL 100


The reference variable x disappears, but the change remains because the real variable num was modified.

*/