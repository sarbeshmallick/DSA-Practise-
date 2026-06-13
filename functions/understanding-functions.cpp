
#include <iostream>
using namespace std;

int add() {
    cout << 6 << endl;
    return 5;

}

int main() {

    cout << "Before print function call" << endl;

    cout << add() << endl;

    cout << "After print functionn call" << endl;
                                                                
    return 0;
}




/*

add()
↓
returns 5
↓
cout prints 5

Never write code after return as the function has already exited 


Prinitng & returning are different 
- in printing cout just prints 
- in return, it just sends back to caller and caller must decide what do with it 

cout << 6;     -  Show 6 on the screen
return 5;      - Give 5 back to the caller & caller will decide what do with it 



A function can print something,
return something,
both,
or neither


*/








































/*

#include <iostream>
using namespace std;

int add() {
    return 5;
    cout << add();
}

int main() {

    cout << "Before print function call" << endl;

    add(); 
    
    cout << add() << endl;
                                                                
    cout << "After print function call" << endl;
    
    return 0;
}


*/