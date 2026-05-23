

// Problem Statement- write a program that accepts 4 numbers and print summation of 2 numbers individually and then print the other 2 nos individually 

// user dynamic input 

#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3, num4;

    cin >> num1 >> num2 >> num3 >> num4;

    cout << num1 + num2 << endl;
    cout << num3 + num4;

    return 0;
}


/*

Input- 4 5 2 1  

Output- 9 3


*/


/*

If your goal is to hardcode values and not taking user inputs then you hv to remove cin cuz cin command is an input instruction. It completely wipes out those initial numbers (4, 5, 2, 1) and forces the program to pause and wait for the user to type 4 new numbers from the keyboard.

int main() {

    int num;

    int num1 = 4;                                        // Hardcoded values 
    int num2 = 5;
    int num3 = 2;
    int num4 = 1;
                                                     
    cout << num1 + num2 << endl;                         
    cout << num3 + num4;

    return 0;
}

Output- 9 3 


*/