#include<iostream>
#include<variant>
//using namespace std;

int main(){
	
	std::variant<int,double,char> v4='Z';
	std::cout<<std::get<2>(v4)<<std::endl;
	std::cout<<std::get<char>(v4)<<std::endl;
	
	//AKTİF TİP DIŞINDAKİ BİR TÜRE ERİŞİLİRSE std::bad_variant_access HATA NESNESİ GÖNDERİLİR
	std::cout<<std::get<1>(v4)<<std::endl; //aktif tip index=2
	std::cout<<std::get<int>(v4)<<std::endl; //aktif tip char

	//hata almamak için
	std::cout<<std::get_if<2>(&v4)<<std::endl;	
	std::cout<<std::get_if<int>(&v4)<<std::endl;

	return 0;
}
