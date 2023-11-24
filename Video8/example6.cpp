#include<iostream>
#include<any>
//using namespace std;

int main(){
		
	std::any a1{"Merhaba"};			//const char*		
	std::any a2{std::in_place_type<std::string>,"Merhaba"};	//std::string
	
	std::any a3{11};				//int
	std::any a4{std::in_place_type<double>,11};	//double

	return 0;
}
