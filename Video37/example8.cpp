#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//swap_ranges

	vector<int> v1{1,11,111,1111,11111};
	vector<int> v2{2,22,222,2222,22222};

	cout<<"v1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	swap_ranges(v1.begin()+1,v1.end()-1,v2.begin());
	//v1: 1, 2, 22, 222, 11111
	//v2: 11, 111, 1111, 2222, 22222

	cout<<"-----\nv1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//swap_ranges(execution::par,v1.begin()+1,v1.end()-1,v2.begin());
	
	return 0;
}
