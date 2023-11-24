#include<iostream>

int main(){
	
	auto le = [](std::string isim) { return "Merhaba "+isim; };
	
	le("Ali");
	//std::cout<<le("Ali")<<std::endl;
	
	[](std::string isim) { return "Merhaba "+isim; }("Veli");
	//std::cout<<[](std::string isim) { return "Merhaba "+isim; }("Veli")<<std::endl;
	
	return 0;
}
