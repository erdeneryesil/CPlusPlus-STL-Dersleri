#include<iostream>

int carp(int x,int y){
	return x*y;
}

int main(){
	
	carp(11,22);
	
	[](int x,int y){return x*y;}();
	
	return 0;
}
