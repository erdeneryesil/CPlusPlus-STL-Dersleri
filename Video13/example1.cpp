#include<iostream>
#include<vector>

int main(){
	
	std::vector<int> v1;	
	std::cout<<v1.size()<<std::endl;

	v1.push_back(22);	
	v1.push_back(44);	
	v1.push_back(11);
	std::cout<<v1.size()<<"-"<<v1.capacity()<<std::endl;

	v1.push_back(55);
	v1.push_back(99);
	std::cout<<v1.size()<<"-"<<v1.capacity()<<std::endl;

	v1.shrink_to_fit();
	std::cout<<v1.size()<<"-"<<v1.capacity()<<std::endl;

	v1.resize(10);
	std::cout<<v1.size()<<"-"<<v1.capacity()<<std::endl;

	for(int i=0;i<v1.size();i++){
		std::cout<<v1.at(i)<<std::endl;
		//std::cout<<v1[i]<<std::endl;
	}

	v1.reserve(20);
	std::cout<<v1.size()<<"-"<<v1.capacity()<<std::endl;

	std::cout<<v1.max_size()<<std::endl;
		
	return 0;
}
