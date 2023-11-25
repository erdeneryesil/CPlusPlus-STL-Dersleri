#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//search

	vector<int> v{10,20,30,40,50,60,70,80,90};
	vector<int> aranan1{50,60,70};
	vector<int> aranan2{10,70,80};
	vector<int> aranan3{40,60,80};	//2*20,2*30,2*40 

	auto itr=search(v.begin(),v.end(),aranan1.begin(),aranan1.end());	//50
	cout<<*itr<<endl;

	itr=search(v.begin(),v.end(),aranan2.begin(),aranan2.end());		//end()
	cout<<*itr<<endl;	

	itr=search(v.begin(),v.end(),aranan3.begin(),aranan3.end(),
					[](int x,int y){return x==y/2;});	//20
	cout<<*itr<<endl;

	//#include<execution>
	//itr=search(execution::par,v.begin(),v.end(),aranan1.begin(),aranan1.end());	//50
	
	return 0;
}
