#include<iostream>
#include<algorithm>

template<int miktar>
class Ekle{
	public:
	 	int operator()(int veri){
			return veri+miktar;
		}
};

int main(){

	int dizi[]{11,22,33,44,55};

	for(int i:dizi)std::cout<<i<<std::endl;
	
	//Ekle<10>e;
	//std::transform(dizi,dizi+5,dizi,e);
	std::transform(dizi,dizi+5,dizi,Ekle<10>());

	for(int i:dizi)std::cout<<i<<std::endl;
	
	return 0;
}
