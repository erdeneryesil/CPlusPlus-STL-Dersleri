#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//find_end

	vector<int> aranan{33,44};
	
	vector<int> v1{11,22,33,44,55};
	auto itr=find_end(v1.begin(),v1.end(),aranan.begin(),aranan.end());		
	cout<<*itr<<endl;		//33

	vector<int> v2{11,22,33,44,55,33,44,66,33,44,77};
	itr=find_end(v2.begin(),v2.end(),aranan.begin(),aranan.end());
	cout<<*itr<<endl;		//33
	itr+=2;
	cout<<*itr<<endl;		//77

	vector<int> v3{11,22,33,55,44,66,44,77};
	itr=find_end(v3.begin(),v3.end(),aranan.begin(),aranan.end());
	cout<<*itr<<endl;		//end()

	//#include<execution>
	//itr=find_end(execution::par,v1.begin(),v1.end(),aranan.begin(),aranan.end());

	return 0;
}
