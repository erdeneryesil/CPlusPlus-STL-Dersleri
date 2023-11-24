#include<iostream>

int main(){

	auto le= [](){
		return 11;
	};
	
	std::cout<<typeid(le()).name()<<std::endl;

	return 0;
}

