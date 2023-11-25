#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//rotate_copy

	vector<int> v1{11,22,33,44,55,66,77,88,99};
	vector<int> v2(v1.size());

	auto itr=rotate_copy(v1.begin(),v1.begin()+4,v1.end(),v2.begin());
	//v1 : 11,22,33,44,55,66,77,88,99
	//v2 : 55,66,77,88,99,11,22,33,44

	cout<<"v1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";
	
	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	cout<<"v2 içerisine kopyalanan son eleman : "<<*(--itr)<<endl; //44

	//#include<execution>
	//auto itr=rotate_copy(execution::par,v1.begin(),v1.begin()+4,v1.end(),v2.begin());

	return 0;
}
