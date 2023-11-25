#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//stable_partition

	vector<int> v{-2,1,-3,2,-1,3};

	auto sinir=stable_partition(v.begin(),v.end(),[](int x){return x>0;});
	//bölümlemeden önceki sıraya göre düzenlenir

	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
	
	cout<<*sinir<<endl;

	//#include<execution>
	//auto sinir=stable_partition(execution::par,v.begin(),v.end(),[](int x){return x>0;});

	return 0;
}
