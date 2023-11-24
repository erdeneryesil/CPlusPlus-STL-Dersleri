#include<iostream>
#include<variant>
//using namespace std;

class Abc{
	int _x;
	char _y;
	double _z;
	public:
		Abc(int x,char y,double z):_x(x),_y(y),_z(z){};
		int X(){return this->_x;}
		char Y(){return this->_y;}
		double Z(){return this->_z;}
};
	
int main(){

	std::variant<Abc,std::string,int> v1{std::in_place_type<Abc>,11,'X',22.33};
	std::cout<<std::get<Abc>(v1).X()<<std::endl;
	std::cout<<std::get<Abc>(v1).Y()<<std::endl;
	std::cout<<std::get<Abc>(v1).Z()<<std::endl;

	std::variant<Abc,std::string,int> v2{std::in_place_index<0>,44,'Y',55.66};
	std::cout<<std::get<Abc>(v2).X()<<std::endl;
	std::cout<<std::get<Abc>(v2).Y()<<std::endl;
	std::cout<<std::get<Abc>(v2).Z()<<std::endl;

	std::variant<Abc,std::string,int> v3{11};
	std::cout<<std::get<int>(v3)<<std::endl;

	return 0;
}
