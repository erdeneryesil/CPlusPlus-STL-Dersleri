#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<char> s{'a','b','c','b','d','z','b'};

	for(char i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	cout<<"\n";
	
	unordered_multiset<char>::iterator itr;

	itr=s.end();
	cout<<*itr<<endl;	
	//itr--;		//hata

	unordered_multiset<char>::local_iterator locitr;

	for(int i=0;i<s.bucket_count();i++){
		cout<<"bucket"<<i<<":";
		for(auto locitr=s.begin(i);locitr!=s.end(i);locitr++){
			cout<<" "<<*locitr<<" ";
		}
		cout<<"\n";
	}

	return 0;
}
