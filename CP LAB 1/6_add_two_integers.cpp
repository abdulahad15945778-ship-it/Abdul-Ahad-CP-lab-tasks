      // Fig. 1.6: fig01_06.cpp
     // Addition program.
#include <iostream>
using namespace std;
      // function main begins program execution
int main()
    {
    int integer1;  // first number to be input by user    
    int integer2;  // second number to be input by user   
    int sum;       // variable in which sum will be stored
    
    cout << "Enter first integer\n\t\t";  // prompt
    cin >> integer1;                  // read an integer
    
    cout << "Enter second integer\n\t\t"; // prompt
    cin >> integer2;                  // read an integer
    
    sum = integer1 + integer2;  // assign result to sum
    
    cout << "Sum is " << sum << endl; // print sum
    
    return 0;   // indicate that program ended successfully
    
    } // end function main
