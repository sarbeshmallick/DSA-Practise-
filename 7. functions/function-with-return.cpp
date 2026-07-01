

// Function using return 

// Problem Statement- write a program that accepts numbers and print summation of 2 numbers and again take 2 number and print it 



#include <iostream>
using namespace std;

// This function ONLY does math. It takes two inputs and returns the answer.
int add(int a, int b) {
    return a + b;
}   

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    // We call the function right inside the cout statement!
    cout << "The sum is: " << add(num1, num2) << endl;
    cout << add(num1, num2) * 10;
    
    return 0;
}



/*

Harcode values if 

#include <iostream>
using namespace std;

// This function stays exactly the same—it doesn't care WHERE the numbers come from!

int add(int a, int b) {
    return a + b;
}

int main() {
    // Hardcode your values right here
    int num1 = 12;
    int num2 = 8;
    
    // Pass those hardcoded variables into the function
    cout << "The sum of " << num1 << " and " << num2 << " is: " << add(num1, num2) << endl;
    
    // You can even pass numbers directly into the function without variables!
    cout << "Direct hardcoded math (5 + 10): " << add(5, 10) << endl;
    
    return 0;
}


*/



/*

Difference btw void & function--

Think of return and void as opposites, but they work together to define how a function behaves.
The easiest way to understand them is to think of a function as a worker you hired to do a task.

What is void?
void means "nothing." When you put void in front of a function name, you are telling C++: "This function will do some work, but it will not give any data back to me when it's done."

The Analogy: You hire a worker to paint your garage (void paintGarage()). They go to the garage, do the work, and finish. They don't hand you a package or an object when they are done. They just say, "I'm finished!" and leave.

Your Code: Your void inputTwonumbersAndPrintAddofthem() function does the math and prints to the screen itself, but it hands nothing back to main().


What does return do?
return is used when you do want the function to hand a piece of data back to you. When a function hits a return statement, it immediately stops working and throws the result back to whoever called it.

To use return, you must replace void with the type of data you want back (like int, double, or string).

The Analogy: You give a worker money and ask them to buy a coffee (int buyCoffee()). They go to the shop, get the coffee, come back, and hand the coffee to you.

Code-
int add(int a, int b) {
    return a + b;          // This hands the answer back to main()
}

With void (No Return),                                         With int (Using return)
cpp void printTotal() {   cout << 5 + 5; }                     cpp int getTotal() {   return 5 + 5; }
                                                 
How you call it in main:                                       How you call it in main: 
printTotal();                                                   int result = getTotal()

The function handles the printing. main gets nothing.       The function hands 10 back to main. You can now save it in a variable, use it in more math, or print it



In short:
void is a data type that means "this function returns nothing."
return is the actual action verb that physically hands data back to main().


Summary Checklist
void means: "Do the work here, print it here, and throw the data away when finished."
return a + b; means: "Calculate this math, stop what you are doing, and physically hand this number back to main() so we can use it later."

*/