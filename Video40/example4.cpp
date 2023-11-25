#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//set_difference
	
	vector<int> v1{1,2,3,11};
	vector<int> v2{11,1,22,33};
	//1,11 her ikisinde de var
	vector<int> v3(8);
	vector<int> v4(8);

	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());

	auto itr=set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
	//2,3,0,0,0,0,0,0

	v3.resize(itr-v3.begin());
	//2,3

	cout<<"v3 	 	: ";for(int i:v3)cout<<i<<", ";cout<<"\n";
	cout<<"v3 son eleman	: ";cout<<*(--itr)<<endl;

	auto buyukMu=[](int x,int y){return x>y;};
	sort(v1.begin(),v1.end(),buyukMu);
	sort(v2.begin(),v2.end(),buyukMu);

	itr=set_difference(v2.begin(),v2.end(),v1.begin(),v1.end(),v4.begin(),buyukMu);
	//33,22,0,0,0,0,0,0
	
	v4.resize(itr-v4.begin());
	//33,22

	cout<<"v4 	 	: ";for(int i:v4)cout<<i<<", ";cout<<"\n";
	cout<<"v4 son eleman	: ";cout<<*(--itr)<<endl;

	//#include<execution>
	//itr=set_difference(execution::par,v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

	return 0;
}

