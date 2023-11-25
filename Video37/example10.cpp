#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//transform

	vector<int> v1{10,20,30,40,50,60};
	vector<int> v2(6);

	auto itr=transform(v1.begin(),v1.end(),v2.begin(),[](int x){return x*2;}); 
	//unary operation
	//hedef v2 
	//v1 : 10, 20, 30, 40, 50, 60 
	//v2 : 20, 40, 60, 80, 100, 120 
	
	cout<<"v1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";
	
	cout<<"v2 içerisindeki son eleman : "<<*(--itr)<<endl;

	itr=transform(v1.begin(),v1.end(),v2.begin(),v1.begin(),[](int x,int y){return x+y;});
	//binary operation
	//hedef v1 
	//v1 : 30, 60, 90, 120, 150, 180 
	//v2 : 20, 40, 60, 80, 100, 120

	cout<<"-----\nv1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	cout<<"v1 içerisindeki son eleman : "<<*(--itr)<<endl;

	//#include<execution>
	//transform(execution::par,v1.begin(),v1.end(),v2.begin(),v1.begin(),[](int x,int y){return x+y;});

	return 0;
}
