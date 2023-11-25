#include <iostream>
using namespace std;

int main(){
	
	int* ptr=new int(11);//basit değişkene işaret ediyor

	//işlemler...

	ptr=new int[5]{11,22,33,44,55};//diziye işaret ediyor

	//işlemler...

	//ptr basit değişken mi yoksa dizi mi işaret ediyor bilmiyoruz

	//verilere ulaşmak 
	cout<<*ptr<<endl;	//basit bir değişkeni işaret ediyorsa

	for(int i=0;i<5;i++){	//diziyi işaret ediyorsa
		cout<<*ptr<<endl;
		ptr++;
	}

	//belleği temizlemek
	delete ptr;		//basit bir değişkeni işaret ediyorsa
	delete[] ptr;		//diziyi işaret ediyorsa

	return 0;
}
