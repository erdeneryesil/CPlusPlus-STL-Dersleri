#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//reverse 
	vector<int> v{11,22,33,44,55,66,77,88,99};

	reverse(v.begin(),v.end());		//99,88,77,66,55,44,33,22,11
	//reverse(v.begin()+1,v.end()-1); 	//11,88,77,66,55,44,33,22,99

	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//reverse(execution::par,v.begin(),v.end());

	return 0;
}
