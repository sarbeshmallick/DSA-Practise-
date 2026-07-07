
// Function using return 

// Problem Statement- write a program that accepts numbers and print summation of 2 numbers & multiply the sum with 10 and print it. Store the sum in a variable 

// Dynamic user Input 




#include <iostream>
using namespace std;

int add(int a, int b) {

  return a + b;

}

int main() {

  int num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  int result = add(num1, num2);                            // cout << "The sum is: " << add(num1, num2) << endl;    - we can call the funtion inside cout also 

  cout << result << endl;
  cout << result * 10 << endl;
    
    return 0;
}





/*

I followed SRP principle here but before int main() i.e add() because int main() did lot of jobs 
Every function has exactly one job. Even multiplication could become its own function.

int multiplyByTen(int number)
{
    return number * 10;
}

*/


/*

Not SRP directly but i broke the work into small steps 

int add(int a, int b) {
  return a + b;
}

int main() {

  int num1, num2;
  cout << "Enter 2 numbers: ";
  cin >> num1 >> num2;

  int sum = add(num1, num2);
  int result = sum * 10;

  cout << "The sum of 2 numbers is: " << sum << endl;
  cout << "Multiplying sum with 10: " << result << endl;

    return 0;
}

*/