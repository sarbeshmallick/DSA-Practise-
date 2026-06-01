



#include <iostream>
using namespace std;

int main() {
  int num[5];  
  
  cout << "enter your numbers: ";                                        // write cout before you type for loop for arrays 

  for(int i = 0; i <= 4; i++) {  
    cin >> num[i];                  
    cout << num[i] << endl;                             
  }

  cout << num[5-1];            // Arrays last element will be num[size - 1] where size = n           //a better ver-  cout << "Last element: " << num[n - 1];
                              
    return 0;
}


// when we see Runtime Error always remember it is accessing an invalid memory location 

// index0 or num0 from where all these get started 


/*
if i type 10 20 30 40 50 as input and let's see what happens inside-

i=0 -> 10
i=1 -> 20
i=2 -> 30
i=3 -> 40
i=4 -> 50

cout << num[5-1] = cout << num[4]  -> 50 

num[0] -> 0 positions away from start
num[1] -> 1 position away from start
num[2] -> 2 positions away from start

First index  = 0
Last index   = size - 1
Number of elements = size

output-
10
20
30
40
50
50   //as u typed cout << num[5-1] so 50 is printed twice 

if you input 10 20 30 40 50 60 70 then also it will print 10 20 30 40 50 50 

*/