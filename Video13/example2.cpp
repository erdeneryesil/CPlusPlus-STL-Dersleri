#include<iostream>
#include<vector>

int main(){
	
	std::vector<std::string> v;	

	if(v.empty())std::cout<<"v boş"<<std::endl;
	else std::cout<<"v boş değil"<<std::endl;

	v.push_back("Sinop");
	v.push_back("İstanbul");
	v.push_back("Ankara");
	v.push_back("İzmir");
	
	if(v.empty())std::cout<<"v boş"<<std::endl;
	else std::cout<<"v boş değil"<<std::endl;

	std::cout<<v.front()<<std::endl;
	std::cout<<v.back()<<std::endl;
		
	return 0;
}
