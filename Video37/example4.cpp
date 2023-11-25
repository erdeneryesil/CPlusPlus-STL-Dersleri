#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//copy_backward

	vector<int> v1{10,20,30,40,50,60};
	vector<int> v2(10);


	auto itr=copy_backward(v1.begin(),v1.end(),v2.end()-2); //0,0,10,20,30,40,50,60,0,0,	
	
	cout<<"v2 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	cout<<"v2 içerisine son taşınan eleman : "<<*itr<<endl;	//10

	//execution::seq,execution::par,execution::par_unseq,execution::unseq desteklemiyor
	
	return 0;
}
