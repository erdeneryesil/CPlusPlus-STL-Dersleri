#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//is_sorted_until c++11

	vector<int> v1{1,3,4,5,8,7,6};	//7'ye kadar sıralı
		
	auto itr=is_sorted_until(v1.begin(),v1.end());
	cout<<"v1, Sıralı olmayan ilk eleman: "<<*itr<<endl;
	cout<<"v1, Sıralı elemanların sayısı: "<<itr-v1.begin()<<endl;

	vector<int>v2{8,5,4,3,1,7,6}; //7'ye kadar sıralı
	itr=is_sorted_until(v2.begin(),v2.end(),[](int x,int y){return x>y;});
	cout<<"v2, Sıralı olmayan ilk eleman: "<<*itr<<endl;
	cout<<"v2, Sıralı elemanların sayısı: "<<itr-v2.begin()<<endl;

	//#include<execution>
	//auto itr=is_sorted_until(execution::par,v1.begin(),v1.end());

	return 0;
}
