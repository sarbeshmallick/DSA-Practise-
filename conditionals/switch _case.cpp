

// Switch case - different format of writing if , when u know what can be possible if-else conditions 

// Given the day number, Print which day it is of week, assume week starts from Monday and ends on Sunday 

// we know that there are 7 days so we will apply switch case. The Switch will function according to the Day & u write all the cases possible

#include <iostream>
using namespace std;

int main() {

  int day;
  cout << "enter the day :";
  cin >> day;

  switch(day) {
    case 1: 
      cout << "Monday";
      break;
    case 2:
      cout << "Tuesday";
      break;
    case 3:
      cout << "Wednesday";
      break;
    case 4:
      cout << "Thursday";
      break;
    case 5:
      cout << "Friday";
      break;
    case 6: 
      cout << "Saturday";
      break;
    case 7:
      cout << "Sunday";
      break;
     
     default:
      cout << "Invalid";

  }
    
    return 0;
}


/*

if break; is not applied then let's say I write 2 it will print TuesdayWednesday,Thurs,Fri,Sat,Sun
Without break, execution continues into the next case (called fall-through).
if break; is applied at each case then it stops and ALWAYS EXITS THE OUTERLOOP i.e swicth

if we input day 15 , no output will come as there is no case for that. In such scenarios use Default: 
Default  - Handles Invalid Input 

Suggestions / Improvements- 
instead of cout << "Monday";   use cout << "Monday\n";   OR  cout << "Monday" << endl;   as Output stays on same line sometimes.


Important Concept About switch-
switch is mainly used when:

One variable
Many fixed values/options

Perfect examples:

Days
Menu systems
Calculator choices
Game controls
ATM options


One Important Limitation
switch works with:
int
char
constants
NOT with ranges.


One Cool Advanced Trick (Later)
You can combine cases:

case 6:
case 7:
    cout << "Weekend";
    break;
    
*/ 
























/*

int main() {
int day;
cout << "Enter the day";
cin >> day;

if ( day == 1) {
cout << .. ;
}
else if ( day == 2) {
cout << ... ;
}
}

*/