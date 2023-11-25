#include<iostream>
#include<array>

int main(){
	
	std::array<int,0>arr1;
	
	if(arr1.empty())std::cout<<"Boş"<<std::endl;
	else std::cout<<"Boş Değil"<<std::endl;
	
	std::array<int,2>arr2;

	if(arr2.empty())std::cout<<"Boş"<<std::endl;
	else std::cout<<"Boş değil"<<std::endl;
	
	return 0;
}
