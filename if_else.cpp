

// Given an age, print adult >= 18, or print "Teen"

#include <iostream>
using namespace std;

int main() {

  int age;
  cout << "Enter your age: ";
  cin >> age;


  if (age >= 18) {
    cout << "Adult";
  }


  else {
    cout << "Teen";
  }

    return 0;
}


// if we don't use else, then the program will print "Adult" for ages 18 and above, but it will not print anything for ages below 18
// if we enter age as 17 then it will print nothing, which is not the desired behavior. We want it to print "Teen" for ages below 18.


// we can use else to fix this issue, but we choose not to use else in this case because we want to demonstrate the use of if statements without else
// but in a real-world scenario, it is better to use else to handle the case when the age is below 18, to ensure that the program behaves as expected for all input values.
// but there's a problem, compiler end up compiling both if statements, which is not efficient. It will check the first if statement and then check the second if statement, even if the first condition is true. This can lead to unnecessary checks and can slow down the program. Using else would prevent this issue by ensuring that only one of the conditions is checked, improving the efficiency of the program.
// to avoid unecessay checks use else if statement , which will check the first condition and if it is true, it will not check the second condition. This way we can avoid unnecessary checks and improve the efficiency of the program.