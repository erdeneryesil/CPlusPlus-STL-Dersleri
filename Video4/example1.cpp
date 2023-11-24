#include<iostream>
#include<vector>
using namespace std;

auto carpim(int x, int y){
	return x*y;		//int
}

int main(){
	auto v1=11.99; 			//double
	
	auto v2=11; 			//int

	auto v3=11.99f;			//float
	
	auto v4='X'; 			//char

	auto v5="Merhaba";		//const char*

	vector<int>vec;
	auto iter=vec.begin();		//vector<int>::iterator

	vector<pair<double,int>> vec2;
	auto iter2=vec2.begin();	//vector<pair<double,int>>::iterator

	//auto x;				//HATA !
	
	return 0;
}
