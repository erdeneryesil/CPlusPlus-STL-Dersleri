#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    
	//iota c++11

	vector<int> v(10);
	int ilk=33;

	iota(v.begin(),v.end(),ilk); //33,...,42

	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
        
	return 0;
}
