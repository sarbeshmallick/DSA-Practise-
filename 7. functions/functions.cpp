

// Functions 

/*

A function is a block of code that does a specific task. We write it once and call it whenever we need it.
It's like a "helper" or a "servant". We teach the servant how to make tea once, and then just order "Make Tea" anytime.
Functions keep our code clean and reusable.

int main() is the entry point of cpp code 

void main() - it is a self function where it will do something but will not return anything 


#include <iostream>
using namespace std;
void print() {
    cout << "I am a print function" << endl;
}                                                      
int main() {
    
    return 0;                                                  // It will return nothing or print nothing , for that we need to call print() after int main()
}



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

/*

Output- 
Before print function call
I am a print function
After print function call

*/