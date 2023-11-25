#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){

	//inclusive_scan c++17

 	vector<int> v{2,3,4,5};
	
	vector<int>topla(4);		
	vector<int>carp(4);	
	vector<int>islem(4);	

	auto itr=inclusive_scan(v.begin(),v.end(),topla.begin());
	//{2,5,9,14}
	cout<<"topla 	    		: ";for(int i:topla)cout<<i<<", ";cout<<"\n";
	cout<<"topla son eleman	: "<<*(--itr)<<endl;

	itr=inclusive_scan(v.begin(),v.end(),carp.begin(),multiplies<int>());
	//{2,6,24,120}
	cout<<"carp 	    		: ";for(int i:carp)cout<<i<<", ";cout<<"\n";
	cout<<"carp son eleman		: "<<*(--itr)<<endl;

	itr=inclusive_scan(v.begin(),v.end(),islem.begin(),[](int x,int y){return 2*(x+y);});
	//{2,10,28,66}
	cout<<"islem 	    		: ";for(int i:islem)cout<<i<<", ";cout<<"\n";
	cout<<"islem son eleman	: "<<*(--itr)<<endl;
    
    	//#include<execution>
	//inclusive_scan(execution::par,v.begin(),v.end(),toplaPar.begin());

	return 0;
}
