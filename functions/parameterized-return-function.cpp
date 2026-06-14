
// Parameterized Functions using return 

// Problem Statement- Write a function that returns addition of 2 numbers 




#include <iostream>
using namespace std;

int sumoftownos(int num1, int num2) {
  return num1 + num2;
}

int main() {

  int res = sumoftownos(10, 20);                                // cout << sumoftownos(10, 20);   can also be used but we used this if we need sumoftownos multiple times 

  cout << res;
    
    return 0;
}




/*

Terminology check- 

int sumOfTwoNumbers(int num1, int num2)
num1 and num2 are parameters 

sumOfTwoNumbers(4, 5);
4 and 5 are arugments 

*/