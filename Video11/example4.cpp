#include<iostream>

template<int miktar>
class Ekle{
	public:
	 	int operator()(int veri){
			return veri+miktar;
		}
};

int main(){

	int x=11;
	std::cout<<x<<std::endl;
		
	//Ekle<10> e;
	//x=e(x);
	x=Ekle<10>()(x);
	std::cout<<x<<std::endl;
	
	return 0;
}
