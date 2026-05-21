



#include <iostream>
using namespace std;

int main() {
  int num[5];    

  for(int i = 0; i <= 4; i++) {  
    cin >> num[i];                  
    cout << num[i] << endl;                             
  }

  cout << num[5-1];     // Arrays last element will be num[size - 1] where size = n
    
    return 0;
}


// when we see Runtime Error always remember it is accessing an invalid memory location 

// index0 or num0 from where all these get started 


