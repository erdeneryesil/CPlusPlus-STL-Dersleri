#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//rotate

	vector<int> v{11,22,33,44,55,66,77,88,99};

	auto itr=rotate(v.begin(),v.begin()+4,v.end());//55,66,77,88,99,11,22,33,44

	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
	cout<<"İkinci alt aralığın başlangıcı : "<<*itr<<endl;	//11

	//#include<execution>
	//auto itr=rotate(execution::par,v.begin(),v.begin()+4,v.end());

	return 0;
}
