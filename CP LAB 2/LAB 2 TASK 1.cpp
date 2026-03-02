#include <iostream> // name : abdulahad ; etea :5124772
using namespace std;

int main() {
    //DIFFERENT TYPES K VARIABLE DICLARE KRNY K LIYE
    int a = 10;
    float floatVar = 5.5f; //DECIMAL VALUES  Ka LiIYE
    double doubleVar = 20.99; //LONG DECIMAL VALUE K LIYE
    char charVar = 'A'; //  CHARACTER LIKHNY K LIYR
    bool boolVar = true;

    // Printing values, sizes, and memory locations
    cout << "INT VARIABLE" << endl;//integer  VALUES  Ka LiIYw kara ga
    cout << "Value: " << a << endl;//value bataya ga
    cout << "Size: " << sizeof(a) << " bytes" << endl;//size bataya ga 
    cout << "Memory Address: " << &floatVar << endl << endl;//location bayaga 

    cout << "FLOAT VARIABLE" << endl;    //DECIMAL VALUES  Ka LiIYw kara ga
    cout << "Value: " << floatVar << endl;//value bataya ga
    cout << "Size: " << sizeof(floatVar) << " bytes" << endl;	//size bataya ga 
    cout << "Memory Address: " << &floatVar << endl << endl;//location bayaga

    cout << "DOUBLE VARIABLE" << endl;
    cout << "Value: " << doubleVar << endl;	// bari decimal values bataya ga
    cout << "Size: " << sizeof(doubleVar) << " bytes" << endl;	//size bataya ga 
    cout << "Memory Address: " << &doubleVar << endl << endl;//location bayaga

    cout << "CHAR VARIABLE" << endl;//single  VALUES  Ka LiYa use hota ha
    cout << "Value: " << charVar << endl;	//value bataya ga
    cout << "Size: " << sizeof(charVar) << " bytes" << endl;	//size bataya ga 
    cout << "Memory Address: " << (void*)&charVar << endl << endl;//location bayaga

    cout << "BOOL VARIABLE" << endl;//yes or no  koi 1 option choose karna ka liya  
    cout << "Value: " << boolVar << endl;	//value bataya ga
    cout << "Size: " << sizeof(boolVar) << " bytes" << endl;	//size bataya ga 
    cout << "Memory Address: " << &boolVar << endl;//location bayaga

    return 0;
}

