#include<iostream>
#include<any>
//using namespace std;

int main(){
		
	std::any a=11;
	
	if(a.has_value())std::cout<<"Dolu"<<std::endl;
	else std::cout<<"Boş"<<std::endl;
	
	a.reset();

	if(a.has_value())std::cout<<"Dolu"<<std::endl;
	else std::cout<<"Boş"<<std::endl;

	return 0;
}
