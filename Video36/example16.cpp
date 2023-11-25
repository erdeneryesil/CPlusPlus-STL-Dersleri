#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//search_n

	vector<int> v{10,20,20,30,30,30,40,40,40,40};

	auto itr=search_n(v.begin(),v.end(),2,20);	//ilk 20
	cout<<*itr<<endl;

	itr=search_n(v.begin(),v.end(),3,20);		//v.end()
	cout<<*itr<<endl;

	itr=search_n(v.begin(),v.end(),4,40);		//ilk 40
	cout<<*itr<<endl;

	itr=search_n(v.begin(),v.end(),3,60,
			[](int x,int y){return x==y/2;});//ilk 30		
	cout<<*itr<<endl;

	//#include<execution>
	//itr=search_n(execution::par,v.begin(),v.end(),2,20);	//ilk 20
	
	return 0;
}
