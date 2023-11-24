#include<iostream>

int main(){
	
	int x=11;
	double y=22.33;
	std::string z="selam";
	
	std::cout<<"lambda expression öncesi"<<std::endl;
	std::cout<<x<<","<<y<<" "<<z<<std::endl;
	
	auto le=[=](){
		//x++;	//hata. x, read-only
		int a=x;
		a++;
		//y+=2.0;//hata. y, read-only
		double b=y;
		b+=2.0;
		//z.append("merhaba");////hata. z, read-only
		std::string c=z;
		c.append(" merhaba");	
		std::cout<<"lambda expression içinden"<<std::endl;
		std::cout<<a<<","<<b<<" "<<c<<std::endl;
	};
	
	le();
	std::cout<<"lambda expression sonrası"<<std::endl;
	std::cout<<x<<","<<y<<" "<<z<<std::endl;
	
	return 0;
}
