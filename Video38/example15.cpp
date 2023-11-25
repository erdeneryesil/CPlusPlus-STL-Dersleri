#include<iostream>
#include<algorithm>
#include<random>

using namespace std;

int main(){
    
	//shuffle c++11

	vector<int> v{11,22,33,44,55,66,77,88,99};

	shuffle(v.begin(),v.end(),mt19937{random_device{}()});

	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n"; 
    
	return 0;
}
