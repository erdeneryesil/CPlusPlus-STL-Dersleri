#include <iostream>
#include <vector>
#include <numeric>


using namespace std;

int main(){

	//transform_exclusive_scan c++17
	
	vector<int> v1{2,3,4,5};
	vector<int> v2(4);
	int ilkDeger=100;
	
	auto itr=transform_exclusive_scan(v1.begin(),v1.end(),v2.begin(),ilkDeger,
					[](int x,int y){return x+y;},[](int x){return x*10;});
	//sonuç v2
	//100, 100+2*10, 120+(3*10), 150+(4*10)
	
	cout<<"v1		: ";for(int i:v1)cout<<i<<", ";cout<<"\n";
	cout<<"v2		: ";for(int i:v2)cout<<i<<", ";cout<<"\n";
	cout<<"v2 son eleman	: "<<*(--itr)<<endl;

	//#include<execution>
	//transform_exclusive_scan(execution::par,v1.begin(),v1.end(),v2.begin(),ilkDeger,
					//[](int x,int y){return x+y;},[](int x){return x*10;});

	return 0;
}
