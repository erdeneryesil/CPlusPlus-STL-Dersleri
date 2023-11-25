#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<int> s{11,22,33,111,22,22};

	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<endl;
	}

	cout<<"-----\n";
	cout<<"bucket 0: "<<s.bucket_size(0)<<endl;
	cout<<"bucket 1: "<<s.bucket_size(1)<<endl;
	cout<<"bucket 2: "<<s.bucket_size(2)<<endl;	
	cout<<"bucket 3: "<<s.bucket_size(3)<<endl;
	cout<<"bucket 4: "<<s.bucket_size(4)<<endl;
	cout<<"bucket 5: "<<s.bucket_size(5)<<endl;
	cout<<"bucket 6: "<<s.bucket_size(6)<<endl;

	return 0;
}
