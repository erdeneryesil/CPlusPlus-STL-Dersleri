#include<iostream>
#include<optional>
//using namespace std;

int main(){
	
	std::optional<int> o{11};

	if(o){std::cout<<"dolu"<<std::endl;}
	else {std::cout<<"boş"<<std::endl;}

	if(o.has_value()){std::cout<<"dolu"<<std::endl;}
	else {std::cout<<"boş"<<std::endl;}

	if(o==std::nullopt){std::cout<<"boş"<<std::endl;}
	else {std::cout<<"dolu"<<std::endl;}
		
	return 0;
}

