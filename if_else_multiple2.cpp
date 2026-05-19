
/*
// Given the marks of a student, tell us the grade he is getting following the below rules 
 Grade A- (>=90)
 grade B- (>=70 and <90)
 Grade C- (>=50 and <70)
 Grade D- (>=35 and < 50)
 Fail-     (< 35)
*/

//          /* .... */   - commenting multiple withoud writing // in every line




#include <iostream>
using namespace std;

int main() {

  int marks;
  cout << "Enter marks :";
  cin >> marks;

  if (marks >= 90) { 
    cout << "Grade A";
  }

  else if (marks >= 70 && marks < 90) {
    cout << "Grade B";
  }

  else if (marks >= 50 && marks < 70) {
    cout << "Grade C";
  }

  else if (marks >= 35 && marks < 50) {
    cout << "Grade D";
  }

  else {
    cout << "Fail";
  }

  return 0;
}




/*
Cleaner Version of code- 
if (marks >= 90) {
    cout << "Grade A";
}
else if (marks >= 70) {
    cout << "Grade B";
}
else if (marks >= 50) {
    cout << "Grade C";
}
else if (marks >= 35) {
    cout << "Grade D";
}
else {
    cout << "Fail";
}
*/


