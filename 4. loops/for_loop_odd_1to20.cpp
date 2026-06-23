


// Problem statement - Print odd numbers from 1 to 20


#include <iostream>
using namespace std;

int main() {

  for (int i = 1; i <= 20; i = i+2) {
    cout << i << endl;
  }
    
    return 0;
}



/*

instead of i=i+2 we can use i += 2

so it becomes, for (int i = 1; i <= 20; i += 2)

*/
