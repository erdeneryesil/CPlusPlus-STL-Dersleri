#include<iostream>
#include<array>

int main(){
	
	std::array<int,4> arr1{11,33,55,77};
	std::array<int,4> arr2{22,44,66,88};

	for(int i=0;i<arr1.size();i++){
		std::cout<<arr1[i]<<"-"<<arr2[i]<<std::endl;
	}

	arr1.swap(arr2);
	//arr2.swap(arr1);
	
	std::cout<<"---"<<std::endl;
	for(int i=0;i<arr1.size();i++){
		std::cout<<arr1[i]<<"-"<<arr2[i]<<std::endl;
	}
	
	return 0;
}
