#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//includes
	
	vector<int> v{22,55,44,77,33,11,66};
	vector<int> v1{22,11,33,44};
	vector<int> v2{11,55,77};
	vector<int> v3{55,66,77,88};	//88, v içerisinde yok

	sort(v.begin(),v.end());
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	sort(v3.begin(),v3.end());

	cout<<includes(v.begin(),v.end(),v1.begin(),v1.end())<<endl;
	cout<<includes(v.begin(),v.end(),v2.begin(),v2.end())<<endl;
	cout<<includes(v.begin(),v.end(),v3.begin(),v3.end())<<endl;

	//#include<execution>
	//includes(execution::par,v.begin(),v.end(),v1.begin(),v1.end())

	return 0;
}
