

// Strings 

/*

#include<bits/stdc++.h>
using namespace std;

int main() {
    string str = "sarbesh";
    cout << str;
    return 0;
}

Underneath String we hv a character Array of one more than the size , the last position is kept as a null element to denote the string is ended 
like for string sarbesh we have character array of 8 
if we do,   cout << str[2];               -  we will get r 

if we do,    cout << str.size();          - we get the size of the string i.e 7 for sarbesh    , size is a function   





*/



#include <bits/stdc++.h>
using namespace std;

int main() {

    string str = "sarbesh";
    int length = str.size();
    for(int i = 0; i <= length - 1; i++) {
    cout << str[i];                                   // if i just do cout << str;  then i will get 7 times sarbeshsarbeshsarbeshsarbeshsarbeshsarbeshsarbeshsarbesh
    }

    return 0;
}
