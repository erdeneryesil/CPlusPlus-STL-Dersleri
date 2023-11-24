#include<iostream>
#include<optional>
//using namespace std;

class Abc{
   public:
	Abc(char x){std::cout<<"Abc(char x) kurucu"<<std::endl;}
	Abc(int y){std::cout<<"Abc(int y) kurucu"<<std::endl;}
	Abc(double z){std::cout<<"Abc(double z) kurucu"<<std::endl;}
	~Abc(){std::cout<<"Yıkıcı"<<std::endl;}
};

int main(){
	
	std::optional<Abc> o;	

	o.emplace('Z');
	o.emplace(11);	
	o.emplace(22.33);

	//o='Z';
	//o=11;
	//o=22.33;

	return 0;
}
