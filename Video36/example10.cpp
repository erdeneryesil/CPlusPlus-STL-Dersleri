#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//find_first_of

	vector<int> v{11,22,33,44,55,66,77};

	vector<int> aranan1{22,44,66};
	auto itr=find_first_of(v.begin(),v.end(),aranan1.begin(),aranan1.end());		
	cout<<*itr<<endl;		//22

	vector<int> aranan2{99,44};
	itr=find_first_of(v.begin(),v.end(),aranan2.begin(),aranan2.end());		
	cout<<*itr<<endl;		//44

	vector<int> aranan3{99,88};
	itr=find_first_of(v.begin(),v.end(),aranan3.begin(),aranan3.end());		
	cout<<*itr<<endl;		//end()

	//#include<execution>
	//itr=find_first_of(execution::par,v.begin(),v.end(),aranan3.begin(),aranan3.end());	

	return 0;
}
