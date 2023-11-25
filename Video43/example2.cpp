#include <iostream>
using namespace std;

int main(){

	int x=11;
	int* ptr1=&x; 

	int* ptr2=new int(11);

	cout<<"x değeri		:"<<x<<endl;
	cout<<"x adresi		:"<<&x<<endl;
	cout<<"ptr1 veri	  	:"<<*ptr1<<endl;
	cout<<"ptr1 adres	  	:"<<ptr1<<endl;

	cout<<"ptr2 veri	  	:"<<*ptr2<<endl;
	cout<<"ptr2 adres	  	:"<<ptr2<<endl;

	return 0;
}
