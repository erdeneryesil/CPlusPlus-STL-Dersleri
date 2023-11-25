#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//move_backward c++11

	vector<string> v1{"aa","cc","dd","bb"};
	vector<string> v2(8);

	cout<<"v1 : ";for(string& i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(string& i:v2)cout<<i<<", ";cout<<"\n";

	auto itr=move_backward(v1.begin(),v1.end(),v2.end()-2); 

	cout<<"--------\nv1 : ";for(string& i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(string& i:v2)cout<<i<<", ";cout<<"\n";

	cout<<"v2 içerisine son taşınan eleman : "<<*itr<<endl;	//aa

	//execution::seq,execution::par,execution::par_unseq,execution::unseq desteklemiyor
	
	return 0;
}
