

// While Loop   - Another syntatcical way of writing for loop 

// Probelem Statement- Print all the multiples of 5 till 100

#include <iostream>
using namespace std;

// here we will draw comparison of for loop at 1st and while loop at 2nd

/*
int main() {
  for(int i = 5; i <= 100; i = i+5) {
      cout << i << endl;
  }
 
  */
  
// Now we will show while loop below- 

  int main() {

  int i = 5;                                           // Initializer 
  while( i <= 100) {                                   // Condition 
    cout << i << endl;                                 // Operations 

    i = i + 5;                                         // Increase 
  }

    return 0;

}

/*

Improvements in Code- 

Use compound assignment: Instead of i = i + 5;, you can write i += 5;. It's shorter and widely used by C++ developers.

Pro-Tip on endl vs "\n": In C++, endl prints a new line and forces the program to flush the output buffer (essentially making sure it writes to the screen instantly)
/n is fast cuz it skips heavy flushing 

while (i <= 100) { 
  cout << i << "\n"; 
  i += 5;

*/


/*

Difference btw for and while loop 

for loop is used when number of iterations is known

for(int i = 1; i <= 10; i++)
You already know:
start
end
increment
Perfect for counting loops.


while loop is used when number of iterations is NOT known beforehand

while(password != correctPassword)
u don't know how many attempts user will take 

Real examples where while loop is better-

1. Password checking 
while(password != "admin") {
    cin >> password;
}

2. Game loop - Game keeps running until player exits.



One Important Beginner Warning- 
In while loops, forgetting increment causes infinite loop.

Example:
while(i <= 100) {
    cout << i << endl;
}

Here i never changes → infinite loop.



Usecases for for loop & while loop-

1. The for loop is for Definite Iteration
Use a for loop when you know in advance how many times the loop needs to run.
Examples: "Loop 100 times," "Loop through every element in an array," or "Print multiples up to 100."

2. The while loop is for Indefinite Iteration
Use a while loop when you have no idea how many times the loop will run. You are waiting for a specific condition to change, or a certain event to happen.
Examples: "Keep playing the game while the player still has lives," or "Read a file while there are still lines left to read," or a random number generator scenario:

while loop example in dice-
// We have no clue if this will loop 1 time, 5 times, or 50 times!

int dice_roll = 0;
while (dice_roll != 6) {
    dice_roll = roll_dice(); 
}


*/
