#include <iostream>
#include <memory>

using namespace std;

int main(){
	
	int *ptr=new int(11);
	shared_ptr<int> sPtr=make_shared<int>(22);

	cout<<*ptr<<endl;	//11 işaret edilen değer
	cout<<*sPtr<<endl;	//22 işaret edilen değer

	cout<<ptr<<endl;	//11 değerinin saklandığı adres
	cout<<sPtr<<endl;	//22 değerinin saklandığı adres
	cout<<sPtr.get()<<endl;	//22 değerinin saklandığı adres
	cout<<&(*sPtr)<<endl;	//22 değerinin saklandığı adres

	cout<<&ptr<<endl;	//ptr nesnesinin adresi 	
	cout<<&sPtr<<endl;	//sPtr nesnesinin adresi 
	
	return 0;
}
