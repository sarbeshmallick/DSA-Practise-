
// Function Arrays 


#include <iostream>
using namespace std;

void explainPassByValueAndReference(int arr[]) {                  // instead of arr[] we can write *arr   as for arrays we can write * before it 
    arr[0] = 100;                                                 // for array we don't hv to write & to pass the value cuz its already taking a refernce 
}

int main() {

    int arr[] = {6, 7, 8, 1, 2};
    explainPassByValueAndReference(arr);                           // It takes memory locations and not copy the data 
    cout << arr[0];                                                // Passing the memory locations and not copying 
    
    return 0;
}





/*

Explanation->

explainPassByValueAndReference(arr);   does not pass the entire array in c++
instead it passes Address of first element

Think:
arr
Index   Value
0       6
1       7
2       8
3       1
4       2

Suppose arr[0] lives at address 1000
then, 
explainPassByValueAndReference(arr);    =     explainPassByValueAndReference(1000);




Note:-

Arrays decay into pointers when passed to functions.
So the function receives the address of the first element.

in array we dont have to write & because it is passing the address of the first element and technically it is pointer 

int arr[]     ->  pointer 


*/



/*

Quick test->

Without running:

void fun(int arr[]) {
    arr[2] = 50;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};

    fun(arr);

    cout << arr[2];
}


Output-> 50

*/