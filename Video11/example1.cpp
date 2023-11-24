#include<iostream>

int ekle(int veri){
	return ++veri;
}

int main(){

	int x=11;
	std::cout<<x<<std::endl;
		
	x=ekle(x);
	std::cout<<x<<std::endl;
	
	return 0;
}
