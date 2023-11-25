#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//swap

	vector<int> v1{11,33,55};
	vector<int> v2{22,44,66,88};

	cout<<"v1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	swap(v1,v2);

	cout<<"-----\nv1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	//execution::seq,execution::par,execution::par_unseq,execution::unseq desteklemiyor
	
	return 0;
}
