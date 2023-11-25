#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){

	//exclusive_scan c++17

 	vector<int> v{2,3,4,5};
	
	vector<int>topla(4);		
	vector<int>carp(4);	
	vector<int>islem(4);	

	auto itr=exclusive_scan(v.begin(),v.end(),topla.begin(),6);
	//{6,8,11,15}
	cout<<"topla 	    		: ";for(int i:topla)cout<<i<<", ";cout<<"\n";
	cout<<"topla son eleman	: "<<*(--itr)<<endl;

	itr=exclusive_scan(v.begin(),v.end(),carp.begin(),6,multiplies<int>());
	//{6,12,36,144}
	cout<<"carp 	    		: ";for(int i:carp)cout<<i<<", ";cout<<"\n";
	cout<<"carp son eleman		: "<<*(--itr)<<endl;

	itr=exclusive_scan(v.begin(),v.end(),islem.begin(),6,[](int x,int y){return 2*(x+y);});
	//{6,16,38,84}
	cout<<"islem 	    		: ";for(int i:islem)cout<<i<<", ";cout<<"\n";
	cout<<"islem son eleman	: "<<*(--itr)<<endl;

	//#include<execution>
	//exclusive_scan(execution::par,v.begin(),v.end(),topla.begin(),6);
	
	return 0;
}
