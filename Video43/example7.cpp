#include <iostream>
using namespace std;

int main(){

	int* ptr=new int(11);

	cout<<*ptr<<endl;

	//işlemler...
	
	delete ptr;//herhangi bir yerde silinmiş olabilir

	//işlemler...

	cout<<*ptr<<endl;

	return 0;
}
