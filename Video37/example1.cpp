#include <iostream>
#include <algorithm>
#include <list>
#include <forward_list>
using namespace std;

int main(){

	//copy

	vector<int> v{10,20,30,40,50,60};
	forward_list<int> fl(6);
	list<int> l(10);

	copy(v.begin(),v.end(),fl.begin());
	
	auto itr=copy(v.begin()+1,v.end()-1,l.begin());	//20,30,40,50	itr, 50'den sonraki elemana işaret eder

	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";

	cout<<"fl: ";for(int i:fl)cout<<i<<", ";cout<<"\n";

	cout<<"l : ";for(int i:l)cout<<i<<", ";cout<<"\n";
	
	cout<<"l içerisine son eklenen eleman: "<<*(--itr)<<endl;

	//#include<execution>
	//copy(execution::par,v.begin(),v.end(),fl.begin());
	
	return 0;
}
