#include<iostream>
#include<algorithm>

class Ekle{
	public:
	 	int operator()(int veri){
			return ++veri;
		}
};

int main(){

	int dizi[]{11,22,33,44,55};

	for(int i:dizi)std::cout<<i<<std::endl;
	
	//Ekle e;
	//std::transform(dizi,dizi+5,dizi,e);
	std::transform(dizi,dizi+5,dizi,Ekle());

	for(int i:dizi)std::cout<<i<<std::endl;
	
	return 0;
}
