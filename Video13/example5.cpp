#include<iostream>
#include<vector>

int main(){
	
	std::vector<int>v1{11,33,55,77};
	std::vector<int>v2{22,44,66,88};
		
	for(int i=0;i<v1.size();i++){
		std::cout<<v1.at(i)<<"-"<<v2.at(i)<<std::endl;
	}

	v1.swap(v2);
	
	std::cout<<"---"<<std::endl;
	for(int i=0;i<v1.size();i++){
		std::cout<<v1.at(i)<<"-"<<v2.at(i)<<std::endl;
	}
		
	return 0;
}
