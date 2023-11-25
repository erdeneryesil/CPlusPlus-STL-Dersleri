#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main(){

	//copy_if c++11

	vector<int> v{10,20,30,40,50,60};
	list<int> l(10);

	auto itr=copy_if(v.begin(),v.end(),l.begin(),[](int x){return x%15==0;}); 	//30,60
	
	cout<<"l : ";for(int i:l)cout<<i<<", ";cout<<"\n";

	l.resize(distance(l.begin(),itr));

	cout<<"l : ";for(int i:l)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//auto itr=copy_if(execution::par,v.begin(),v.end(),l.begin(),[](int x){return x%15==0;});
	
	return 0;
}
