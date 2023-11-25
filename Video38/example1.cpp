#include <iostream>
#include <algorithm>
using namespace std;

class Sinif{
	int _sayi;
	public:
		Sinif(){_sayi=0;}
		int operator()(){return _sayi+=2;}
}Nesne;


int fonksiyon(){return rand()%100;}

int main(){

	//generate

	vector<int> v1(10);  		//0,0,0,0,0,0,0,0,0,0
	vector<int> v2(10);  		//0,0,0,0,0,0,0,0,0,0
	vector<int> v3(10);  		//0,0,0,0,0,0,0,0,0,0
	
	int sayi=0;
	generate(v1.begin(),v1.end(),[&](){return ++sayi;});//lamda ifadesi ile
	//1,2,3,4,5,6,7,8,9,10
	cout<<"v1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";
	
	generate(v2.begin(),v2.end(),Nesne);//sınıf ile
	//2,4,6,8,10,12,14,16,18,20
	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	generate(v3.begin(),v3.end(),fonksiyon);//fonksiyon ile
	cout<<"v3 : ";for(int i:v3)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//generate(execution::par,v2.begin(),v2.end(),Nesne);

	return 0;
}
