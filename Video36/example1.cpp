#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//all_of c++11

	vector<int> v1{10,20,30,40,50};
	vector<int> v2{11,20,30,40,50};
	vector<int> v3{10,22,33,44,55};
	vector<int> v4{11,22,33,44,55};
	vector<int> v5{};

	auto mod10=[](int x){return x%10==0;};

	cout<<all_of(v1.begin(),v1.end(),mod10)<<endl;//true
	cout<<all_of(v2.begin(),v2.end(),mod10)<<endl;//false
	cout<<all_of(v3.begin(),v3.end(),mod10)<<endl;//false
	cout<<all_of(v4.begin(),v4.end(),mod10)<<endl;//false
	cout<<all_of(v5.begin(),v5.end(),mod10)<<endl;//true

	//#include<execution>
	//cout<<all_of(execution::par,v5.begin(),v5.end(),mod10)<<endl;//true

	return 0;
}
