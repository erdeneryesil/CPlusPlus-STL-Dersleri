#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//find

	vector<int> v{10,20,30,40,20,50};

	vector<int>::iterator itr;
	
	itr=find(v.begin(),v.end(),20);		
	cout<<*itr<<endl;		//20
	itr++;
	cout<<*itr<<endl;		//30

	itr=find(v.begin(),v.end(),60);		//end()
	cout<<*itr<<endl;

	//#include<execution>
	//itr=find(execution::par,v.begin(),v.end(),20);

	return 0;
}
