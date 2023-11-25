#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){

	//transform_inclusive_scan c++17
	
	vector<int> v1{2,3,4,5};
	vector<int> v2(4);
	int deger=60;
	
	
	auto itr=transform_inclusive_scan(v1.begin(),v1.end(),v2.begin(),
				[](int x,int y){return x+y;},[](int x){return x*10;});
	//deger parametresi olmadan	
	//sonuç v2
	//2*10, 20+(3*10), 50+(4*10), 90+(5*10)
	
	
	//auto itr=transform_inclusive_scan(v1.begin(),v1.end(),v2.begin(),[](int x,int y){return x+y;},[](int x){return x*10;},deger);
	//deger parametresi ile	
	//sonuç v2
	//60+2*10, 80+(3*10), 110+(4*10), 150+(5*10)
	
	cout<<"v1		: ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2		: ";for(int i:v2)cout<<i<<", ";cout<<"\n";
	cout<<"v2 son eleman	: "<<*(--itr)<<endl;

	//#include<execution
	//transform_inclusive_scan(execution::par,v1.begin(),v1.end(),v2.begin(),
				//[](int x,int y){return x+y;},[](int x){return x*10;});

	return 0;
}
