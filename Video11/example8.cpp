#include<iostream>
#include<algorithm>

int main(){

	int x = std::multiplies<int>()(5, 11);
	std::cout<<x<<std::endl;

	if(std::not_equal_to<int>()(x,99))
		std::cout<<x<<", 99'a eşit değildir"<<std::endl;
	
	if(std::equal_to<int>()(x,55))
		std::cout<<x<<", 55'e eşittir"<<std::endl;
	
	return 0;
}
