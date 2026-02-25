     // Fig. 1.2: fig01_02.cpp
    // A first program in C++.
#include <iostream>// include library for input and output
using namespace std;// allow standard names like "cout and cin" without std::
// function main begins program execution
int main()// it is sttarting point of program
    {
    int a = 10; // (int) =integer (a) is variable which holds value 10 int= datatype
    cout<< "Enter value for a:\n";
    
    cin >> a;  //this cin will take value from us and show the value which it take from us instead of showing the value we put in a in program on line 8
    cout << "a = " << a;// will show the value user put
    
    
    return 0;   // indicate that program ended successfully
    } // end function main

