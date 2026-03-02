// name : abdulahad ; etea :5124772
#include <iostream>
using namespace std;
int main()
    {
    	int num1;  //DECLARTION OF VARIABLE
    	int num2;
    	cout<<"Enter First Number :\n"; //DISPALY OR PRINT
    	cin>>num1; // INPUT FROM USER
    	
    	cout<<"Enter Second Number :\n";  //OUTPUT
    	cin>>num2;

if (num1< num2){  //IF USED FOR COMPARISON BTW TWO NUMBERS   Agr pehla number chota ho or dusra bara ho to if ki condition show ho gi 
	cout<<num1<<"  is smaller than  "<<num2<<endl;
}

else if (num1>num2){   //ELSE IF USED FOR OTHER THAN IF CONDITION  agr pehla number bara ho or dusra chota ho ti ifelse ki body show ho gi
	cout<<num1<<"  is greater than  "<<num2<<endl;
}
else {  // USED IF THE FORST CONDITION DEOS NOT SATISFY agr dono equal ho to ya condition ki body show ho gi
	cout<<num1<<"  is equal to  "<<num2;
}

return 0;
}

