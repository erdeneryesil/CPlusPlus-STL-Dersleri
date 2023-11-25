#include <iostream>
using namespace std;

int main(){
	
	int* ptr1=new int(11);
	int* ptr2=ptr1;
	
	//işlemler...

	delete ptr1;//herhangi bir yerde silinmiş olabilir

	//işlemler...

	delete ptr2;//daha önce silindiği için hata oluşacak

	return 0;
}
