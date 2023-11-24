#include<iostream>

class Ekle{
	
	public:
	 	int operator()(int veri){
			return ++veri;
		}
};

int main(){

	int x=11;
	std::cout<<x<<std::endl;
		
	//Ekle e;
	//x=e(x);
	x=Ekle()(x);
	std::cout<<x<<std::endl;
	
	return 0;
}

