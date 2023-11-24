#include<iostream>
#include<any>
//using namespace std;

std::string tur(std::any x){
	if(x.type()==typeid(char))return "character";
	else if(x.type()==typeid(int))return "integer";
	else if(x.type()==typeid(double))return "double";
	else if(x.type()==typeid(float))return "float";
	else return "bilemedim";
}

int main(){
		
	std::any a=11;
	std::cout<<tur(a)<<std::endl;

	a=33.44;
	std::cout<<tur(a)<<std::endl;

	a.emplace<char>('S');	//char
	std::cout<<tur(a)<<std::endl;
	
	a.emplace<std::string>("selam");
	std::cout<<tur(a)<<std::endl;

	return 0;
}
