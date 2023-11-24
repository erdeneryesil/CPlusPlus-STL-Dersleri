#include<iostream>
#include<optional>
//using namespace std;

int main(){
	
	std::optional<int>o{11};
	*o=22;
	std::cout<<*o<<std::endl;

	o.value()=33;
	std::cout<<o.value()<<std::endl;
	
	return 0;
}
