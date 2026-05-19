

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

  if (age < 18 and age >= 10) {
    cout << "Teen";
  }


  if (age < 10) {
    cout << "Child";
  }

    return 0;
}






// we can write   and  or  &&   as seen in code line 21. 
// when we write and or && , both the conditions must be true for the whole condition to be true. In this case, both conditions must be true for the program to print "Teen". If either condition is false, the program will not print "Teen". This is because the and operator (&&) requires both conditions to be true for the overall condition to be true. If we had used the or operator (||), then only one of the conditions would need to be true for the overall condition to be true, which would not give us the desired behavior in this case.

// but there's a problem, if i enter age as 91, then also if will check 2nd and 3rd if condition, so all 3 if conditions will be checked even if 1st condition is true which is not effecient so we use if else

// remember else dosen't hv a condition, but we want to have multiple conditions, so we can use else if statement, which will check the first condition and if it is true, it will not check the second condition.


// if we don't use else, then the program will print "Adult" for ages 18 and above, but it will not print anything for ages below 18
// if we enter age as 17 then it will print nothing, which is not the desired behavior. We want it to print "Teen" for ages below 18.


// we can use else to fix this issue, but we choose not to use else in this case because we want to demonstrate the use of if statements without else
// but in a real-world scenario, it is better to use else to handle the case when the age is below 18, to ensure that the program behaves as expected for all input values.
// but there's a problem, compiler end up compiling both if statements, which is not efficient. It will check the first if statement and then check the second if statement, even if the first condition is true. This can lead to unnecessary checks and can slow down the program. Using else would prevent this issue by ensuring that only one of the conditions is checked, improving the efficiency of the program.
// to avoid unecessay checks use else if statement , which will check the first condition and if it is true, it will not check the second condition. This way we can avoid unnecessary checks and improve the efficiency of the program.