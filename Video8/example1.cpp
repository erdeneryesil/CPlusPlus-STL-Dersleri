#include<iostream>
#include<any>
//using namespace std;

int main(){
		
	std::any a1;		//boş
	std::any a2{};		//boş
	std::any a3={};		//boş
	
	std::any a4=11;		//int
	std::any a5{22.33};	//double
	std::any a6{"merhaba"};	//const char*
	
	std::any a7=std::make_any<std::string>("merhaba");//std::string
	std::any a8=std::make_any<float>(44.55f);
	std::any a9=std::make_any<char>('X');
	
	std::cout<<std::any_cast<int>(a4) <<std::endl;
	std::cout<<std::any_cast<double>(a5) <<std::endl;
	std::cout<<std::any_cast<const char*>(a6) <<std::endl;
	std::cout<<std::any_cast<std::string>(a7) <<std::endl;
	std::cout<<std::any_cast<float>(a8) <<std::endl;
	std::cout<<std::any_cast<char>(a9) <<std::endl;
	
	//bad_any_cast<> HATA NESNESİ
	//Eğer any_cast<>() ile tür dönüşümü başarısız ise...
	//std::cout<<std::any_cast<int>(a7) <<std::endl;

	return 0;
}

