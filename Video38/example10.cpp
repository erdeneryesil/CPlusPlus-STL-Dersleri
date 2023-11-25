#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//reverse_copy

	vector<int> v1{11,22,33,44,55,66,77,88,99};
	vector<int> v2(v1.size());

	auto itr=reverse_copy(v1.begin(),v1.end(),v2.begin());	//99,88,77,66,55,44,33,22,11	
	
	//auto itr=reverse_copy(v1.begin()+1,v1.end()-1,v2.begin());//88,77,66,55,44,33,22,0,0

	cout<<"v1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";
	
	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	cout<<"v2 içerisine son kopyalanan eleman : "<<*(--itr)<<endl;

	//#include<execution>
	//auto itr=reverse_copy(execution::par,v1.begin(),v1.end(),v2.begin());

	return 0;
}
