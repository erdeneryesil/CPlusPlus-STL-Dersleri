#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//find_if_not c++11

	vector<int> v{11,22,30,44,55,60};

	auto itr=find_if_not(v.begin(),v.end(),[](int x){return x%11==0;});	//30	
	cout<<*itr<<endl;			

	itr=find_if_not(v.begin(),v.end(),[](int x){return x%10==0||x%11==0;});	//end()	
	cout<<*itr<<endl;

	//#include<execution>
	//itr=find_if_not(execution::par,v.begin(),v.end(),[](int x){return x%11==0;});	//30

	return 0;
}
