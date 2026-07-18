
// filename- array_transformation_challenge.cpp

// Problem Statement:

// Write a void function named transformArray() that accepts an integer array.
// Use a for loop to visit every element of the array.

// If the element is even, multiply it by 2.
// If the element is odd, multiply it by 3.

// Demonstrate that the original array in main() is modified
// by printing the updated array after calling the function.





#include <iostream>
using namespace std;


void transformArray(int arr[]) {

  for (int i = 0; i < 6; i++) {

    if (arr[i] % 2 == 0) {
      arr[i] = arr[i] * 2;
     }
  
  else {
      arr[i] = arr[i] * 3;
    }

  }
}



int main() {

  int arr[] = {2, 5, 8, 3, 10, 7};

  transformArray(arr);

  for (int i = 0; i < 6; i++) {
    cout << arr[i] << " ";
  }

    return 0;
}




/*

>Output-
4 15 16 9 20 21 

*/