#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){

	//partial_sum
	/*

	y0 = x0
	y1 = x0 + x1
	y2 = x0 + x1 + x2
	y3 = x0 + x1 + x2 + x3
	y4 = x0 + x1 + x2 + x3 + x4

	*/

	vector<int> v{2,3,4,5};
	vector<int>topla(4);		
	vector<int>carp(4);	
	vector<int>islem(4);	

	auto itr=partial_sum(v.begin(),v.end(),topla.begin());
	//{2,5,9,14}
	cout<<"topla 			: ";for(int i:topla)cout<<i<<", ";cout<<"\n";
	cout<<"topla son eleman	: "<<*(--itr)<<endl;

	itr=partial_sum(v.begin(),v.end(),carp.begin(),multiplies<int>());
	//{2,6,24,120}
	cout<<"carp 			: ";for(int i:carp)cout<<i<<", ";cout<<"\n";
	cout<<"carp son eleman		: "<<*(--itr)<<endl;

	itr=partial_sum(v.begin(),v.end(),islem.begin(),[](int x,int y){return 2*(x+y);});
	//{2,10,28,66}
	cout<<"islem 			: ";for(int i:islem)cout<<i<<", ";cout<<"\n";
	cout<<"islem son eleman	: "<<*(--itr)<<endl;
        
	return 0;
}
