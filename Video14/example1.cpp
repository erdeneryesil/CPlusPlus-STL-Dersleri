#include<iostream>
#include<array>

int main(){
	
	std::array<int,5> arr1={33,22,44,11,55};
	std::array<int,5> arr2{88,66,77,99,111};
	std::array<std::string,2> arr3{"Selam","merhaba"};
	
	std::array<int,6>arr;
	arr[0]=22;
	arr[1]=66;
	arr.at(2)=55;
	arr.at(3)=44;
	std::get<4>(arr)=11;
	std::get<5>(arr)=88;

	std::cout<<arr[4]<<std::endl;
	std::cout<<arr.at(0)<<std::endl;
	std::cout<<std::get<3>(arr)<<std::endl;

	std::cout<<arr.size()<<std::endl;
	std::cout<<arr.max_size()<<std::endl;

	std::cout<<arr.front()<<std::endl;
	std::cout<<arr.back()<<std::endl;
		
	return 0;
}
