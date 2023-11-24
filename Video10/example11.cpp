#include<iostream>

int main(){

	auto le= [](int x,int y){
		if(x>y)return "ilk sayı büyüktür";
		else if(x<y)return "ikinci sayı büyüktür";
		else return "eşittir";		
	};
	
	std::cout<<le(11,22)<<std::endl;
	std::cout<<le(44,33)<<std::endl;
	std::cout<<le(55,55)<<std::endl;
	
	return 0;
}
