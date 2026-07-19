

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

void transformArray(int arr[], int size) {
  
  for (int i = 0; i < size; i++) {

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
  int size = 6;

  transformArray(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

    return 0;

}





/*
>Output-
4 15 16 9 20 21 

*/


/*

right now i wrote:
int size = 6

later:
int size = sizeof(arr) / sizeof(arr[0]);


Suppose:
int arr[] = {2,5,8,3,10,7};

Each int usually takes 4 bytes.
So, 6 elements × 4 bytes = 24 bytes

Therefore, sizeof(arr)    returns 24 
and,       sizeof(arr[0]) returns 4 

then, 24 / 4 = 6 
So, size becomes 6 automatically.

*/