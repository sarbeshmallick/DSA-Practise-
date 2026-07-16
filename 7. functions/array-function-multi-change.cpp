
// Prblm stat- Write a void function that accepts an integer array, modifies the first two elements of the array, and demonstrate that the changes are reflected in the original array in main().


#include <iostream>
using namespace std;

void updateArray(int arr[]) {                 
    arr[0] = 100;   
    arr[1] = 200;                                             
}

int main() {

    int arr[] = {6, 7, 8, 1, 2};

    updateArray(arr);  

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << " " << arr[3];                                               
                                                                  
    return 0;
}


/*

>Output- 

100
200
8 1

*/
