#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//remove_copy

	vector<int> v1{99,1,99,2,99};
	vector<int> v2(5);		//0,0,0,0,0
	
	auto itr=remove_copy(v1.begin(),v1.end(),v2.begin(),99);
	//v1 : 99, 1, 99, 2, 99
	//v2 : 1, 2, 0, 0, 0

	cout<<"v1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";
	cout<<"v2 içerisine eklenen son eleman : "<<*(--itr)<<endl;

	//#include<execution>
	//auto itr=remove_copy(execution::par,v1.begin(),v1.end(),v2.begin(),99);

	return 0;
}
