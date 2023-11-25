#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//is_sorted c++11

	vector<int> v1{1,2,3,4,5,6,7,8};	//sıralı
	vector<int> v2{6,2,7,5,3,1,4,8};	//sırasız
	vector<int> v3{6,2,7,5,1,3,4,8};	//1,3,4,8 sıralı	
	vector<int> v4{8,7,6,5,4,3,2,1};	//> sıralı

	cout<<is_sorted(v1.begin(),v1.end())<<endl;
	cout<<is_sorted(v2.begin(),v2.end())<<endl;
	cout<<is_sorted(v3.begin()+4,v3.end())<<endl;
	cout<<is_sorted(v4.begin(),v4.end(),[](int x,int y){return x>y;})<<endl;

	//#include<execution>
	//is_sorted(execution::par,v1.begin(),v1.end())

	return 0;
}
