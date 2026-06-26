


// paramterized functions using void 

#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello " << name << endl;
}


int main() {

  greet("Sarbesh");
  
  greet("Anu");

    
    return 0;
}



/*

Old code when no endl is given inside void so the name was priniting on same line and i cleverly wrote cout << endl; in code 40
#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello " << name;
}


int main() {

  greet("Sarbesh");
  cout << endl;
  greet("Anu");

    
    return 0;
}

*/



/*

Code Breakdown->

void greet(string name) {
    cout << "Hello " << name << endl;
}

1. greet is just a function name 
2. we could also write void hello(string name)  or  void banana(string name)  , the compiler dosen't care

1. string name is a parameter 
2. Means- This function expects a string.
          When someone calls me,
          I'll store that string inside a variable called name.
3. think of it like an empty box, before calling name = ? ,  after calling greet("Sarbesh")  the CPU does name = "Sarbesh"
4. now the fucntion becomes   -   cout << "Hello " << "Sarbesh" << endl;
5. Output   -  Hello Sarbesh

1. why hello remains same because it is fixed and name is a variable and so it gets changed everytime
cout << "Hello " << name;

1. and coming why we choose name, we can actually choose anything over here like person or xyz 
2. like   void greet(string person) 
          cout << "Hello " << person;
3. the compiler cares about consistency 
4. like for example-

         void greet(string banana) {
         cout << "Hello " << banana;
         }
         greet("Sarbesh");

Output-   Hello Sarbesh 



*/

/*

Revision-

void greet(string name)

means:
Function name = greet
Parameter type = string
Parameter variable = name
Whatever string is passed during function call, gets stored in name.

*/



/*

Advanced Stuff->

Current version-    
void greet(string name)
greet("Sarbesh");           // when you call

C++ creates a copy 
Think:
Original:
"Sarbesh"

Copy:
"Sarbesh"

Function uses the copy 


Reference version-
void greet(string& name)     

Now no copy is created, Function directly uses the original string, Faster.

later we will use-
void greet(const string& name)

Meaning:
Don't make a copy
Use the original string
Don't allow modifications


*/



