#include <iostream>
#include <memory>

using namespace std;

int main(){
	int *ptr=new int(11);
	shared_ptr<int> sPtr(ptr);

	cout<<*ptr<<endl;//11 işaret edilen değer
	cout<<*sPtr<<endl;//11 işaret edilen değer

	//delete ptr;//HATA! ptr ve sPtr aynı nesneyi işaret ettiği için biz silemeyiz

	return 0;
}
