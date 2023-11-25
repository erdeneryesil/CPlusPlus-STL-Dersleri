#include<iostream>
#include<array>

int main(){
	
	std::array<float,10>arr;
	arr.fill(99.88f);
	
	for(int i=0;i<arr.size();i++){
		std::cout<<arr.[i]<<std::endl;
	}
	
	return 0;
}
