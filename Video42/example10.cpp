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
class Sinif:public shared_ptr<Sinif>
{
	private:
		X _x;
	public: 
		int okuX(){return this->_x.okuDeger();}
};

int main(){

	//uninitialized_value_construct_n c++17

	pair<Sinif*,ptrdiff_t>bellek=get_temporary_buffer<Sinif>(5);
	
	if(bellek.second>0){
		auto itr=uninitialized_value_construct_n(bellek.first,bellek.second);
		cout<<"bellek son eleman	: "<<(*(--itr)).okuX()<<endl;
	}
	
	cout<<"bellek 			: ";
	for(int i=0;i<bellek.second;i++)cout<<(bellek.first+i)->okuX()<<", ";cout<<"\n";

	//#include<execution>
	//uninitialized_value_construct_n(execution::par,bellek.first,bellek.second);

	return 0;
}
