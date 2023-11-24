#include<iostream>
#include<optional>
//using namespace std;

int main(){
	
	std::optional<int>o{11};

	std::cout<<*o<<std::endl;
	
	o=std::nullopt;			// o.reset();
	std::cout<<*o<<std::endl;	//tanımsız
	
	return 0;
}
