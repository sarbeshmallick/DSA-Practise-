

// Prblm stat- Write a function that accepts an integer array, modifies the first two elements of the array, returns the first modified element, and demonstrate that both the returned value and the original array in main() are updated.


#include <iostream>
using namespace std;

int updateArray(int arr[]) {

  arr[0] = 100;
  arr[1] = 200;

return arr[0];
       
}


int main() {

  int arr[] = {1,2,3,4,5};

  int x = updateArray(arr); 

  cout << "Returned value: " << x << endl;

  cout << arr[0] << "\n" << arr[1] << "\n" << arr[2] << "\n" << arr[3] << "\n" << arr[4];

  return 0;
}



/*
> Output- 
Returned value: 100
100
200
3
4
5

*/


