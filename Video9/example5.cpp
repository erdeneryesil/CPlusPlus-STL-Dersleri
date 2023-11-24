#include<iostream>
#include<optional>
//using namespace std;

int main(){
	
	std::optional<int>o{11};

	std::cout<<o.value()<<std::endl;
	
	o=std::nullopt;			//o.reset()
	//std::cout<<o.value()<<std::endl;//std::bad_optional_access	
	
	return 0;
}
