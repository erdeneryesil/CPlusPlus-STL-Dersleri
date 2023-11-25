#include <iostream>
#include <memory>
using namespace std;

class Sinif{
	private:
		int _x;
	public:
		Sinif(){
			this->_x=99;			
			cout<<"Sinif kurucu çalıştı"<<endl;} 
		~Sinif(){
			this->_x=11;
			cout<<"Sinif yıkıcı çalıştı"<<endl;}
		int okuX(){return this->_x;}
};

int main(){

	//destroy_n c++17

	pair<Sinif*,ptrdiff_t>bellek=get_temporary_buffer<Sinif>(5);
	
	if(bellek.second>0){
		uninitialized_default_construct(bellek.first,bellek.first+bellek.second);
	}
	
	cout<<"bellek 			: ";
	for(int i=0;i<bellek.second;i++)cout<<(bellek.first+i)->okuX()<<", ";
	cout<<"\n------------\n";

	auto itr=destroy_n(bellek.first,bellek.second);	//aralıktaki tüm elemanların yıkıcı fonksiyonu
	
	cout<<"bellek 			: ";
	for(int i=0;i<bellek.second;i++)cout<<(bellek.first+i)->okuX()<<", ";
	cout<<"\n";
	
	cout<<"yıkılan son eleman	: "<<(*(--itr)).okuX()<<endl;
	
	//#include<execution>
	//destroy_n(execution::par,bellek.first,bellek.second);

	return 0;
}
