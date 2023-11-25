#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//unique_copy
	
	vector<int> v1{1,1,1,2,3,3,3,2,2,2,1,1,1};
	vector<int> v2(v1.size());

	auto v2Son=unique_copy(v1.begin(),v1.end(),v2.begin()); //v2: 1,2,3,2,1,0,0,0,0,0,0,0,0
	v2.resize(distance(v2.begin(),v2Son));			//v2: 1,2,3,2,1
	
	cout<<"v1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//auto v2Son=unique_copy(execution::par,v1.begin(),v1.end(),v2.begin());

	return 0;
}
