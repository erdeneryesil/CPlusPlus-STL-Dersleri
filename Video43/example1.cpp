#include <iostream>
using namespace std;

int main(){

	int x=11;
	int* ptr; //herhangi bir adresi işaret ediyor

	cout<<"x değeri		 	:"<<x<<endl;
	cout<<"x barındığı adres 		:"<<&x<<endl;
	
	cout<<"ptr gösterdiği adres	  	:"<<ptr<<endl;
	cout<<"ptr gösterdiği adresteki değer	:"<<*ptr<<endl;

	cout<<"---------------------------------------------------"<<endl;

	ptr=&x;

	cout<<"x değeri		 	:"<<x<<endl;
	cout<<"x barındığı adres 		:"<<&x<<endl;
	
	cout<<"ptr gösterdiği adres	  	:"<<ptr<<endl;
	cout<<"ptr gösterdiği adresteki değer	:"<<*ptr<<endl;

	return 0;
}
