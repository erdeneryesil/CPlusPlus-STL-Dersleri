#include<iostream>
#include<optional>
//using namespace std;

class Abc{
	public:
		Abc(int x,char y,double z){};
};

int main(){
	
	std::optional o1{ Abc{11,'A',22.33} };

	std::optional<Abc> o2{ {44,'B',55.66} };

	std::optional<Abc> o3{std::in_place,77,'C',88.99};
	
	return 0;
}
