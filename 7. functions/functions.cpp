

// Functions 
// Problem statement- Write a C++ program to create a user-defined function print() that prints a message, and call it from the main() function.

/*

#include <iostream>
using namespace std;
void print() {
    cout << "I am a print function" << endl;
}                                                      
int main() {
    
    return 0;                                                  // It will return nothing or print nothing , for that we need to call print() after int main()
}                                                              // The print() function exists, but it won't execute until we call it from main() or another function.
                                                                                                                  
*/



#include <iostream>
using namespace std;

void print() {
    cout << "I am a print function" << endl;
}

int main() {

    cout << "Before print function call" << endl;

    print();                                                    // Whenver the function is called, its get a priority, it will be executed first & then reamining lines
                                                            
    cout << "After print function call" << endl;
    
    return 0;
}

// Whenever a function is called, program control temporarily transfers to that function. After the function finishes execution, control returns to the statement immediately following the function call


/*

Output- 
Before print function call
I am a print function
After print function call

*/