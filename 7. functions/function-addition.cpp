
// Functions 

// Problem Statement- write a program that accepts numbers and print summation of 2 numbers and again take 2 number and print it using void 

// user dynamic input 

// whenever u write name of functions, name it in such a way that the name describes what the function does like input2nosAndPrintAdd

#include <iostream>
using namespace std;

void inputTwonumbersAndPrintAddofthem() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The sum is: " <<  num1 + num2 << endl;
}

int main() {

    inputTwonumbersAndPrintAddofthem();        // the problem statement will get finish when we will inputTwonumbersAndPrintAddofthem() 2 times so that's callimg functionn twice
    return 0;
}






/*

int main() {

    inputTwonumbersAndPrintAddofthem();   
    inputTwonumbersAndPrintAddofthem();    // if i write this double then i can again add fresh numbers and 2 outputs will be generated    
    return 0;
}

*/



/*

when harcoding values-

#include <iostream>
using namespace std;

void inputTwonumbersAndPrintAddofthem() {
    // 1. Hardcode the numbers directly inside the function
    int num1 = 10;
    int num2 = 20;
    
    // 2. Removed the user prompt and cin >> lines
    
    // 3. Print the sum
    cout << "The sum is: " <<  num1 + num2 << endl;
}

int main() {

    inputTwonumbersAndPrintAddofthem();
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


In short:
void is a data type that means "this function returns nothing."
return is the actual action verb that physically hands data back to main().


Summary Checklist
void means: "Do the work here, print it here, and throw the data away when finished."
return a + b; means: "Calculate this math, stop what you are doing, and physically hand this number back to main() so we can use it later."

*/
