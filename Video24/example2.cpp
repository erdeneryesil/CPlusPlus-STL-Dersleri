#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<char> s{'a','b','c','d','z'};

	for(char i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	cout<<"\n";
	
	unordered_set<char>::iterator itr;

	itr=s.end();
	//cout<<*itr<<endl;	// geriye gidilemez çünkü forward iterator
	//itr--;		//hata

	unordered_set<char>::local_iterator locitr;

	for(int i=0;i<s.bucket_count();i++){
		cout<<"bucket"<<i<<":";
		for(auto locitr=s.begin(i);locitr!=s.end(i);locitr++){
			cout<<" "<<*locitr<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
