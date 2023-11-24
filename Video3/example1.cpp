#include<iostream>
using namespace std;

int carp(int x,int y){
	return x*y;
}

double carp(double x,double y){
	return x*y;
}

int main(){
	cout<<carp(3,4)<<endl;
	cout<<carp(3.5,4.5)<<endl;
	
	return 0;
}
