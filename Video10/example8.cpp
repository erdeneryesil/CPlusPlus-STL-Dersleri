#include<iostream>

int main(){
	
	int x=11;
	double y=22.33;
	std::string z="selam";
	
	std::cout<<"lambda expression öncesi"<<std::endl;
	std::cout<<x<<","<<y<<" "<<z<<std::endl;
	
	auto le=[&,x](){
		//x++;////hata. x, read-only
		y+=2.0;
		z.append(" merhaba");	

		std::cout<<"lambda expression içinden"<<std::endl;
		std::cout<<x<<","<<y<<" "<<z<<std::endl;
	};
	
	le();
	std::cout<<"lambda expression sonrası"<<std::endl;
	std::cout<<x<<","<<y<<" "<<z<<std::endl;
	
	return 0;
}
