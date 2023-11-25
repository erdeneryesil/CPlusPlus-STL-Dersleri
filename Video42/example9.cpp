#include <iostream>
#include <memory>
using namespace std;

class X{
	private:
		int _deger;
	public:
		X():_deger(99){};
		int okuDeger(){return this->_deger;}
};
class Sinif{
	private:
		X _x;
	public: 
		int okuX(){return this->_x.okuDeger();}
};

int main(){

	//uninitialized_value_construct c++17

	pair<Sinif*,ptrdiff_t>bellek=get_temporary_buffer<Sinif>(5);
	
	if(bellek.second>0){
		uninitialized_value_construct(bellek.first,bellek.first+bellek.second);
	}
	
	cout<<"bellek 			: ";
	for(int i=0;i<bellek.second;i++)cout<<(bellek.first+i)->okuX()<<", ";cout<<"\n";

	//#include<execution>
	//uninitialized_value_construct(execution::par,bellek.first,bellek.first+bellek.second);

	return 0;
}
