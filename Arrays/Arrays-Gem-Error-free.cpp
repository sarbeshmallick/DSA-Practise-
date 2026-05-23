

// Problem Statement- Take 5 numbers from us and print them and store it in an Array 
// Dyamic user Input  

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

// Another demonstration of Array program but you have to type one after the other & it will print accordingly 
/*

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

Output-    // if you type 1 2 3 4 5 it will print these number 
1
2
3
4
5          

If your goal is to take all 5 inputs first from user, store them, and then print the entire array at the end -- 
*/ 


#include <iostream>
using namespace std;

int main() {
  int num[5] = {0};                                                            // Initializing with {} sets all 5 slots to 0 right away       
  
  cout << "Enter 5 numbers (press Space or Enter between each):" << endl;
  
  for(int i = 0; i < 5; i++) { 
    if (!(cin >> num[i])) {
      cout << "Error: That wasn't a valid number!" << endl;
      return 1; // Exit early if input fails
    }             
  }
  
  cout << "\nHere are the numbers stored in the array:" << endl;
  for(int i = 0; i < 5; i++) {
    cout << num[i] << " ";            
  }
  cout << endl;
    
  return 0;
}

/*
Input- 
Enter 5 numbers (press Space or Enter between each):
1 2 5 6 7

Output- 
Here are the numbers stored in the array:
1 2 5 6 7 

*/


/*

in code line 58 (cin >> num[i]) , we can also write-   if (!(cin >> num[i]))   cuz ! catch errors
in code line 66 cout << num[i] << " ";  we can write cout << num[i] << endl;  but the output will be shown like column wise not row wise cuz endl breaks line

with endl           with " "          with ", "            with endl or "\n" it's same 
1                   1 2 3             1, 2, 3,
2
3

*/

