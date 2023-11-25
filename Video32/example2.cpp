#include<iostream>
#include<algorithm>
#include<iterator>
#include<array>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

int main(){

	//begin()

	vector<int> v{11,33,22,44};

	vector<int>::iterator itr;
	
	itr=v.begin();		//11
	cout<<*itr<<endl;

	itr++;			//33
	cout<<*itr<<endl;

	*itr=99;		//11,99,22,44
	cout<<*itr<<endl;
	
	itr--;
	cout<<*itr<<endl;	//11

	return 0;
}

