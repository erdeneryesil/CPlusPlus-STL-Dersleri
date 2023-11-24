#include<iostream>
#include<algorithm>

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

	int dizi[]{11,22,33,44,55};

	for(int i:dizi)std::cout<<i<<std::endl;
	
	//Ekle e(10);
	//std::transform(dizi,dizi+5,dizi,e);
	std::transform(dizi,dizi+5,dizi,Ekle(10));

	for(int i:dizi)std::cout<<i<<std::endl;	
	
	return 0;
}
