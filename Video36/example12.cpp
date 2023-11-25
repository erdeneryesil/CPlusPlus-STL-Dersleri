#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//count

	vector<int> v{11,22,33,33,44,55,66,66,33};

	int kacAdet=count(v.begin(),v.end(),33);	//3
	cout<<kacAdet<<endl;

	kacAdet=count(v.begin(),v.end(),99);		//0
	cout<<kacAdet<<endl;

	//#include<execution>
	//kacAdet=count(execution::par,v.begin(),v.end(),99);	//0
	
	return 0;
}
