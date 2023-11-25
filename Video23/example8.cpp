#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
	
	unordered_set<int> s{11,22,33,111};

	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<endl;
	}

	cout<<"-----\n";
	cout<<"bucket 0: "<<s.bucket_size(0)<<endl;
	cout<<"bucket 1: "<<s.bucket_size(1)<<endl;
	cout<<"bucket 2: "<<s.bucket_size(2)<<endl;	
	cout<<"bucket 3: "<<s.bucket_size(3)<<endl;

	return 0;
}
