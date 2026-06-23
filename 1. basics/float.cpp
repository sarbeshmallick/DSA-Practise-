

#include <iostream>
using namespace std;




int main() {
  float numFloat = 8.7656462345;
  cout << numFloat << endl;
  // Range of float ->   we can store upto 7 decimal places 
  
    double numD = 10.1234567891234;
    cout << numD;
    // Range of double -> we can store upto 15 decimal places
    return 0;
}



/*

Output-
8.76565
10.1235

1. We can see that double is not printing all the 15 decimal places 
2. The reason is not that double can't store 15 decimal places. The reason is that cout does not print all the stored digits by default.
3. By default, cout uses a precision of 6 significant digits, not 6 decimal places.
4. So, 10.1234567891234 gets rounded & displayed as 10.1235 , even though the double is actually storing much more information internally.

5. To see more digits use-
    #include <iomanip>

    cout << fixed << setprecision(15);
    cout << numD;


6. Comparing float & double-
    #include <iostream>
    #include <iomanip>
    using namespace std;

    int main() {
    float f = 8.765462345f;
    double d = 10.1234567891234;

    cout << fixed << setprecision(15);

    cout << "Float  = " << f << endl;
    cout << "Double = " << d << endl;

    return 0;
}
Output-
Float  = 8.765462875366211
Double = 10.123456789123400




Important Thing to Remember- 

when we write    float numFloat = 8.765462345;   
the literal 8.765462345 is actually treated as a double literal first and then converted to float, causing precision loss.

the more explicit way to write-
float numFloat = 8.765462345f;                       // include the f at end 
The f tells the compiler it's a float literal.




| Type          | Approx. Precision                   |
| ------------- | ----------------------------------- |
| `float`       | ~7 significant digits               |
| `double`      | ~15–16 significant digits           |
| `long double` | ~18–21+ digits (compiler dependent) |


<iomanip>   ->  input / output manipulators

cout << fixed << setprecision(15);
- It means Print the number in normal decimal format and show 15 digits after the decimal point.



*/