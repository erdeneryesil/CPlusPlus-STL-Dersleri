#include<iostream>

int main(){
	
	auto le1=[]{return 11;};
	auto le2=[](){return 22;};

	std::cout<<le1()<<std::endl;
	std::cout<<le2()<<std::endl;
	
	return 0;
}
