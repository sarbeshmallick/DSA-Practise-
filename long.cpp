

#include <iostream>
using namespace std;

int main() {
  // here i code int and long both with endl so 2 outputs are generated after each line
    int numInt = 10;
    cout << numInt <<endl;




    long numLong = 1000000000;
    cout << numLong << endl;
    // Range of long -> 10^-12 to 10^12



    // if we want to store a number greater than 10^12 then we can use long long data type
    // Range of long long -> 10^-18 to 10^18
    long long num = 40000000000;
    cout << num;

    return 0;
}