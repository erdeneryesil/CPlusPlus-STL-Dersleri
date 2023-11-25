#include <iostream>
#include <algorithm>
#include <list>
#include <forward_list>
using namespace std;

int main(){

	//copy_n c++11

	vector<int> v{10,20,30,40,50,60};
	forward_list<int> fl(6);
	list<int> l(10);

	copy_n(v.begin(),6,fl.begin());
	
	auto itr=copy_n(v.begin()+1,4,l.begin());	//20,30,40,50

	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";

	cout<<"fl: ";for(int i:fl)cout<<i<<", ";cout<<"\n";

	cout<<"l : ";for(int i:l)cout<<i<<", ";cout<<"\n";

	cout<<"l içerisine son eklenen eleman: "<<*(--itr)<<endl;

	//#include<execution>
	//copy_n(execution::par,v.begin(),6,fl.begin());
	
	return 0;
}

