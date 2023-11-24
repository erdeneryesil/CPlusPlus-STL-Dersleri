#include<iostream>

class Ekle{
	private:
		int _miktar;
	public:
		Ekle(int miktar):_miktar(miktar){}
	 	int operator()(int veri){
			return veri+_miktar;
		}
};

int main(){

	int x=11;
	std::cout<<x<<std::endl;
		
	//Ekle e(10);
	//x=e(x);
	x=Ekle(10)(x);
	std::cout<<x<<std::endl;
	
	return 0;
}
