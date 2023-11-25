#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//iter_swap

	vector<int> v1{1,11,111,1111,11111};
	vector<int> v2{2,22,222,2222,22222};

	cout<<"v1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	iter_swap(v1.end()-1,v2.begin()+2);	//11111 ile 222 değiş tokuş edilir
	//v1 : 1, 11, 111, 1111, 222 
	//v2 : 2, 22, 11111, 2222, 22222 

	cout<<"-----\nv1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	//execution::seq,execution::par,execution::par_unseq,execution::unseq desteklemiyor

	return 0;
}
