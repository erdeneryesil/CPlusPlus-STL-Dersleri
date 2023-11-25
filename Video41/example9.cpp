#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
	//adjacent_difference
	/*

		y0 = x0
		y1 = x1 - x0
		y2 = x2 - x1
		y3 = x3 - x2
		y4 = x4 - x3 

	*/

	vector<int> v{3,4,6,9,13,18};
	vector<int>fark(6);		
	vector<int>carp(6);	
	vector<int>islem(6);	

	auto itr=adjacent_difference(v.begin(),v.end(),fark.begin());
	//{3,1,2,3,4,5}
	cout<<"fark 			: ";for(int i:fark)cout<<i<<", ";cout<<"\n";
	cout<<"fark son eleman		: "<<*(--itr)<<endl;

	itr=adjacent_difference(v.begin(),v.end(),carp.begin(),multiplies<int>());
	//{3,12,24,54,117,234}
	cout<<"carp 			: ";for(int i:carp)cout<<i<<", ";cout<<"\n";
	cout<<"carp son eleman		: "<<*(--itr)<<endl;

	itr=adjacent_difference(v.begin(),v.end(),islem.begin(),[](int x,int y){return 2*(x-y);});
	//{3,2,4,6,8,10}
	cout<<"islem 			: ";for(int i:islem)cout<<i<<", ";cout<<"\n";
	cout<<"islem son eleman	: "<<*(--itr)<<endl;
	
	//#include<execution>
	//adjacent_difference(execution::par,v.begin(),v.end(),fark.begin());
        
	return 0;
}
