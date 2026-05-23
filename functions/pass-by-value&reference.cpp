

// Pass by value & reference 

/*

Pass by Value means Copy the Data 
Pass by reference means Use the original data directly 

--------------------------------------------------------------------------------------------------

*** Pass by value eg code-                                         // a copy is made 

#include <iostream>
using namespace std;

void change(int x) {
    x = 100;
}

int main() {
    int a = 10;

    change(a);

    cout << a;
}

Output- 10    // cuz x is only a copy 

---------------------------------------------------------------------------------------------------


*** Pass by reference eg code-                                  // the original variable is used 

#include <iostream>
using namespace std;

void change(int &x) {                                           // & is used 
    x = 100;
}

int main() {
    int a = 10;

    change(a);

    cout << a;
}

Output- 100      // cuz x directly refers to a 


// ❌ BAD: Pass by Value
// If the vector has 100,000 numbers, C++ copies ALL 100,000 numbers into memory again.
// This slows down your code dramatically and uses up massive memory.
void processData(vector<int> v) { 
    // code
}

//  GOOD: Pass by Reference (using the '&' symbol)
// No copy is made. The function works directly on the original vector.
// Speed is instantaneous regardless of size.
void processData(vector<int> &v) { 
    // code
}

In coding platforms or online assessments, passing heavy objects by value will frequently trigger a TLE (Time Limit Exceeded) error, failing your test cases.

--------------------------------------------------------------------------------------------------------------------------


*** Writing a function to swap two numbers 

// ❌ This won't work! It only swaps the temporary copies.
void wrongSwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

//  This works perfectly because it edits the original variables.
void correctSwap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


One simple rule for now:

Small things (int, char, bool) → usually pass by value
Large things (vector, string, map) → usually pass by reference

Summary Checklist for Your Goals:- 

Small, primitive data types (int, char, float, bool): Keep passing them by value. Making a copy of a single integer takes virtually zero effort for the CPU. Your sumOfTwoNumbers(int num1, int num2) is perfect exactly as it is.

Large data types (string, vector, struct, class): Always pass them by reference (&). If you don't want the function to accidentally change the original data, pass it as a constant reference (const vector &v).

*/



/*

TUF Pass by value--

#include <iostream>
using namespace std;

void changeValue(int x) {
    x = 100; // Changes only the copy
}

int main() {
    int num = 10;
    changeValue(num);
    cout << num; // Output: 10 (Original didn't change!)
}


TUF pass by reference--

#include <iostream>
using namespace std;

void changeRealValue(int &x) { // Note the '&'
    x = 100; // Changes the actual variable
}

int main() {
    int num = 10;
    changeRealValue(num);
    cout << num; // Output: 100 (It changed!)
}


*/


#include <iostream>
using namespace std;

void explainPassByValueAndReference(int arr[]) {                  // instead of arr[] we can write *arr   as for arrays we can write * before it 
    arr[0] = 100;                                                 // for array we don't hv to write & to pass the value cuz its already taking a refernce 
}

int main() {

    int arr[] = {6, 7, 8, 1, 2};
    explainPassByValueAndReference(arr);                           // It takes memory locations and not copy the data 
    cout << arr[0];                                                // Passing the memory locations and not copying 
    
    return 0;
}