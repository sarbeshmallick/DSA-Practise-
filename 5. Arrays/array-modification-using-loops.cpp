

//   1 2 3 4 5  ->  2 4 6 8 10

// Every element should become twice of its original value like array 1,2,3,4,5 should become array 2,4,6,8,10

// Prblm stat- Write a void function named doubleArray() that accepts an integer array.
// Use a for loop to visit every element of the array and double its value.
// Demonstrate that the original array in main() is modified by printing
// the updated array after calling the function.



#include <iostream>
using namespace std;


void doubleArray(int arr[]) {

  for(int i = 0; i < 5; i++) {
    arr[i] =  arr[i] * 2;
  }

}


int main() {

  int arr[] = {1,2,3,4,5};

  doubleArray(arr);

  for(int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
  }

    return 0;

}





/*

Output-
2
4
6
8
10

*/