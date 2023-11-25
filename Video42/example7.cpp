#include <iostream>
#include <memory>
using namespace std;

class Sinif{
	private:
		int _x;
	public:
		Sinif():_x(99){} 
		int okuX(){return this->_x;}
};

int main(){

	//uninitialized_default_construct c++17

	pair<Sinif*,ptrdiff_t>bellek=get_temporary_buffer<Sinif>(5);
	
	if(bellek.second>0){
		//uninitialized_default_construct(bellek.first,bellek.first+bellek.second);
	}
	
	cout<<"bellek 			: ";
	for(int i=0;i<bellek.second;i++)cout<<(bellek.first+i)->okuX()<<", ";cout<<"\n";

	//#include<execution>
	//uninitialized_default_construct(execution::par,bellek.first,bellek.first+bellek.second);

	return 0;
}
