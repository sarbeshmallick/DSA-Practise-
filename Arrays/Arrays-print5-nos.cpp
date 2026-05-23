

// Problem Statement- Take 5 numbers from us and print them and store it in an Array 

/*
int main() {
  int num[5];                                 // As we have intilizaed an empty array but haven't define elemnets it will output garbage elemnets 
  for(int i = 0; i <= 4; i++) {               // Initally we call empty array but then define elements like if int num[3] = {2, 1, 7};
    cout << num[i] << "\n";         
  }        

Output- 
-2
6422280
1996582701                                     // Garbage elements 
4200944
6422352

*/ 

#include <iostream>
using namespace std;

int main() {
  int num[5];    

  for(int i = 0; i <= 4; i++) {  
    cin >> num[i];                  
    cout << num[i] << endl;                             
  }
    
    return 0;
}





/*

Output-    // if you type 1 2 3 4 5 it will print these number 
1
2
3
4
5 

*/



/*

Note- 

Because arrays start from index 0
So 0 1 2 3 4 
Total = 5 elements 

Important Concept-

int num[5];    // Creates 5 boxes 
| Index | Value |
| ----- | ----- |
| 0     | ?     |
| 1     | ?     |
| 2     | ?     |
| 3     | ?     |
| 4     | ?     |

When user enter values:
it get stored inside--   cin >> num[i];        // user input gets stored in those boxes 

*/