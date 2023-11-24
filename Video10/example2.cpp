#include<iostream>

int main(){
	
	auto le = []() { return "Merhaba Lambda..."; };
	le();
	//std::cout<<le()<<std::endl;
	
	[](){return "Merhaba Lambda..."; }()
	//std::cout<<[](){return "Merhaba Lambda..."; }()<<std::endl;
	
	return 0;
}

