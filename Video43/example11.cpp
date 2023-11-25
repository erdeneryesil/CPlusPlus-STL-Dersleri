#include <iostream>
#include <memory>

using namespace std;

int main(){
	int *ptr=new int(11);
	unique_ptr<int> uPtr=make_unique<int>(22);

	cout<<*ptr<<endl;//11 işaret edilen değer
	cout<<*uPtr<<endl;//22 işaret edilen değer

	cout<<ptr<<endl;//11 değerinin saklandığı adres
	cout<<&(*uPtr)<<endl;//22 değerinin saklandığı adres

	cout<<&ptr<<endl;//ptr nesnesinin adresi
	cout<<&uPtr<<endl;//uPtr nesnesinin adresi

	return 0;
}
