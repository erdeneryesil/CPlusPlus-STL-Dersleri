#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//move c++11

	vector<string> v1{"aa","cc","dd","bb"};
	vector<string> v2(4);

	cout<<"v1 : ";for(string& i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(string& i:v2)cout<<i<<", ";cout<<"\n";

	auto itr=move(v1.begin(),v1.end(),v2.begin());

	cout<<"--------\nv1 : ";for(string& i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 : ";for(string& i:v2)cout<<i<<", ";cout<<"\n";

	cout<<"v2 içerisine son taşınan eleman : "<<*(--itr)<<endl;

	//#include<execution>
	//auto itr=move(execution::par,v1.begin(),v1.end(),v2.begin());
	
	return 0;
}
