

// Given an age,
// if the age >= 18, print "Adult"
// if the age < 18 and >= 10, print "Teen"
// if the age < 10, print "Child"

#include <iostream>
using namespace std;

int main() {

  int age;
  cout << "enter your age: ";
  cin >> age;

  if (age >= 18) {
    cout << "Adult";
  }

  else if (age < 18 and age >= 10) {
    cout << "Teen";
  }


  else if (age < 10) {
    cout << "Child";
  }

    return 0;
}




// we are using else if to have multiple conditions, but not using 3 if and also not only else 
// in last statement child we can write else only and not else if because if above 2 conditions becomes false, it will go to third 


// we can write   and  or  &&   as seen in code line 21. 
// when we write and or && , both the conditions must be true for the whole condition to be true. In this case, both conditions must be true for the program to print "Teen". If either condition is false, the program will not print "Teen". This is because the and operator (&&) requires both conditions to be true for the overall condition to be true. If we had used the or operator (||), then only one of the conditions would need to be true for the overall condition to be true, which would not give us the desired behavior in this case.

// but there's a problem, if i enter age as 91, then also if will check 2nd and 3rd if condition, so all 3 if conditions will be checked even if 1st condition is true which is not effecient so we use if else

// remember else dosen't hv a condition, but we want to have multiple conditions, so we can use else if statement, which will check the first condition and if it is true, it will not check the second condition.

// to avoid unecessay checks use else if statement , which will check the first condition and if it is true, it will not check the second condition. This way we can avoid unnecessary checks and improve the efficiency of the program.