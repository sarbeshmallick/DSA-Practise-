#include <iostream>
using namespace std;

int main() {

  string str;
  getline(cin, str);
  cout << str;
    
    return 0;
}


// here we have used the getline() function to take input from the user. The getline() function is used to read a line of text from the input stream. It takes two arguments: the first is the input stream (in this case, cin), and the second is the string variable where the input will be stored (in this case, str).

// The getline() function reads the entire line of input, including spaces, until it encounters a newline character. This allows us to take input that contains spaces, which is not possible with the standard cin >> operator.

// After taking the input, we simply print it out using cout. The output will be exactly what the user entered, including any spaces.

// For example, if the user enters "Hello World", the output will be "Hello World".

// as in getLine1 we have given the option to take input and then output it with our + user but here in getLine2 whatever user inputs in the terminal will get printed as output

