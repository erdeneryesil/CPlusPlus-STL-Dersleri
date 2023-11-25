#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//replace_copy_if

	vector<int> v1{10,20,30,40,50,20,10,10};
	vector<int> v2(8);

	replace_copy_if(v1.begin(),v1.end(),v2.begin(),[](int x){return x%20==0;},99);
	
	cout<<"v1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//replace_copy_if(execution::par,v1.begin(),v1.end(),v2.begin(),[](int x){return x%20==0;},99);

	return 0;
}
