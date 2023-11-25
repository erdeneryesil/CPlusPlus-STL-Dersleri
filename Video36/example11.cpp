#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//adjacent_find

	vector<int> v{11,22,33,33,44,55,66,66,33};

	auto itr=adjacent_find(v.begin(),v.end());
	cout<<*itr<<endl;		//33
	itr++;
	cout<<*itr<<endl;		//33

	itr=adjacent_find(v.begin()+3,v.end());
	cout<<*itr<<endl;		//66
	itr++;
	cout<<*itr<<endl;		//66

	itr=adjacent_find(v.begin(),v.end(),[](int x, int y){return y==2*x;});
	cout<<*itr<<endl;		//11
	itr++;
	cout<<*itr<<endl;		//22

	//#include<execution>
	//itr=adjacent_find(execution::par,v.begin(),v.end(),[](int x, int y){return y==2*x;});

	return 0;
}

