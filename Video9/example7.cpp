#include<iostream>
#include<optional>
//using namespace std;

int main(){
	
	std::optional<int>o{11};
	std::cout<<o.value_or(99)<<std::endl;

	o.reset();
	std::cout<<o.value_or(99)<<std::endl;
	
	return 0;
}
