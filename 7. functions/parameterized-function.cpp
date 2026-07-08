
// Parameterized Functions 

// Problem Statement- Write a function that returns addition of 2 numbers 
// Functions can also be parameterized meaning it is taking something as parameter 

#include <bits/stdc++.h>
using namespace std;

int sumOfTwoNumbers (int num1, int num2) {                        // here the function name is sumOfTwoNumbers and is a parameterized function meaning it will 
    int result = num1 + num2;                                     // be taking parameters and not necessarily it will be of same data type, it can be different
    return result;                                                // its a function that returns a value & not void function 
                                                                 // instead of int result = num1 + num2 & return result we can write directly return num1 + num2;
} 

int main() {

    cout << sumOfTwoNumbers(4, 5) << "\n";                                             
    
    return 0;
}



/*

Old code- 
int main() {
    int res = sumOfTwoNumbers(4, 5);
    cout << res;                                                 // whatever is returned gets stored in res
                                                                 // Passing the function call directly into cout is cleaner
    return 0;
}

Use your new approach (cout << sumOfTwoNumbers(4, 5);) if you only need to print the result once and never look at it again. It keeps main() light and uncluttered.

Use the old approach (int res = ...) if you need to use that result multiple times later in the program. For example:

int res = sumOfTwoNumbers(4, 5);
cout << "The sum is: " << res << "\n";
if (res > 10) {
    cout << "That's a large number!";
}





in code line 11 and 12-

 int sumOfTwoNumbers (int num1, int num2) {
 int result = num1 + num2;
 return result;
}


 we can write directly-
 int sumOfTwoNumbers (int num1, int num2) {                        
    return num1 + num2;                                               
}

Instead of creating a temporary variable int result, storing the math, and then returning it, you can just do return num1 + num2;. The compiler handles this slightly more efficiently and it makes your code cleaner


*/

