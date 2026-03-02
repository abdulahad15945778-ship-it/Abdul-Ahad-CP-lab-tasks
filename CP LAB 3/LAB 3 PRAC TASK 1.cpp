#include <iostream>// name : abdulahad ; etea :5124772
using namespace std;

int main(){
	int age;  // DECLARATION OF VARIABLE integer
	cout << "Enter your age:";    // DISPALY TO USER
	cin >> age;  //INPUT K LIYE
	if(age >=18){     //CONDITION ha true hui to if ki body show ho gi nhi to else ki body 
		cout << "You are elligible to vote." <<endl; // DISPLAY
	}
	else {  // ELSE CONDITION 
		cout << "You are not elligible to vote." <<endl; //DISPLAY
	}
	return 0;

}
