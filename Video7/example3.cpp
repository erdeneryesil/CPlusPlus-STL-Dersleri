#include<iostream>
#include<variant>
//using namespace std;

int main(){
	
	//ATANAN DEĞER HANGİ TİPE UYGUN BELLİ DEĞİL
	//std::variant<int, float, char> v{4.5}; //double

	//ATANAN DEĞER HANGİ TİPE UYGUN BELLİ DEĞİL HANGİ TİPİN SEÇİLECEĞİ in_place_index 
	std::variant<int, float, char> v{std::in_place_index<1>,4.5};

	return 0;
}

