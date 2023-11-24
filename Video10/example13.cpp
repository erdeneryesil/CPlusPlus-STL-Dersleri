#include<iostream>

int main(){

	auto le= [](){
	};
	
	std::cout<<typeid(le()).name()<<std::endl;	//void

	return 0;
}
