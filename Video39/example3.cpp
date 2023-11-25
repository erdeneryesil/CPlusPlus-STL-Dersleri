#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//is_partitioned c++11
	
	auto pozitifMi=[](int x){return x>0;};

	vector<int> v1{1,3,2,-2,-1,-3};
	vector<int> v2{-2,1,-3,2,-1,3};

	cout<<is_partitioned(v1.begin(),v1.end(),pozitifMi)<<endl;
	cout<<is_partitioned(v2.begin(),v2.end(),pozitifMi)<<endl;

	//#include<execution>
	//is_partitioned(execution::par,v1.begin(),v1.end(),pozitifMi)

	return 0;
}
