

#include <iostream>
using namespace std;

int main() {
  // LOGIC STEP 1: Create the boxes
  int num[5] = {0};            
  
  // LOGIC STEP 2: Fill the boxes (The Input Loop)
  for(int i = 0; i < 5; i++) { 
    cin >> num[i];             
  }
  
  // LOGIC STEP 3: Read the boxes (The Output Loop)
  for(int i = 0; i < 5; i++) {
    cout << num[i] << " ";            
  }
  cout << endl;
    
  return 0;
}



/*
The Logic, Step-by-Step:
Step 1: Memory Allocation
int num[5] = {0}; tells the computer: "Give me a row of 5 connected memory slots that store integers, name the whole row num, and clear them out by putting 0 in all of them."

Step 2: The Input Loop
The index variable i starts at 0.

Turn 1 (i = 0): Program pauses at cin >> num[0]. You type 10. 10 goes into slot 0.

Turn 2 (i = 1): Program pauses at cin >> num[1]. You type 20. 20 goes into slot 1.

This repeats until i reaches 4 (num[4]), filling all 5 slots. The loop stops when i becomes 5, because 5 < 5 is false.

Step 3: The Output Loop
Now that the array is full, we reset a brand new loop variable i back to 0 to look at our slots from the beginning.

Turn 1 (i = 0): cout << num[0] << " "; -> Prints 10 

Turn 2 (i = 1): cout << num[1] << " "; -> Prints 20 

This repeats all the way to num[4], giving you your clean, spaced-out list of numbers.

*/ 