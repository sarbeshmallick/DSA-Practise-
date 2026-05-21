

// ARRAYS 

/*
Arrays are containers where u can keep similar data types 

let's see we need 5 nos and then we hv to do a operation , we hv to write int num1, num2, num3 ...;
when we write int num;  - it picks up a memeory location & whatever value u assigns it get stored in that memory 

let's say take an example we need to store 5 of integer data type-

int main() {
int num = 5;
cout << &num;      - when we type &num it shows where the 5 is stored in memory in this case it is 0x61ff0c
return 0;
}

Output- 0x61ff0c        - this is memory address where 5 is stored 

How you declare Arrays- 

 data type  variable [how many elements that array have] - 
int num[5];        - it figures out 1st,2nd,3rd,4th,5th memory address & binds them & keep it contagious - that's 5 contagious memory location 

every memory location can store an integer & we hv 5 memory locations & all of 5 locations can store integer 

int main() {
int num[5] = {5, 2, 1, 3, 7};              - these are 5 elements, 5 is stored in 1st memory location, 2 is stored in 2nd memory location 
cout << num[0];                            - it will output 5 cuz 1st memory location could be accessed by num0 & that's why it is called zero based indexing 
return 0;

*/


#include <iostream>
using namespace std;

int main() {
  int num[5] = {5, 2, 1, 3, 7};                         // 5 elements , num0[5] = 1st, num1[2] = 2nd, num2[1] = 3rd, num3[3] = 4th, num4[7] = 5th 
  for(int i = 0; i <= 4; i++) {              
    cout << num[i] << "\n";                             // i is increasing from num0 to num1 to num4 
  }
    
    return 0;
}

/*
Output- 
5
2
1
3
7
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