#include<iostream>
using namespace std;

template<typename T>
T carp(T x,T y){
	return x*y; 
}
int main(){
	cout<<carp<int>(3,4)<<endl;
	cout<<carp<double>(3.5,4.5)<<endl;

	return 0;
}
