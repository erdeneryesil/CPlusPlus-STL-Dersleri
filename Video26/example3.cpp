#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<int> s{11,22,44,55,66,22,22,22};
	
	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	cout<<"\n";
	
	pair<unordered_multiset<int>::iterator,unordered_multiset<int>::iterator>p;
	
	p=s.equal_range(22);
	cout<<*p.first<<"-";		
	cout<<*p.second<<endl;

	s.erase(p.first,p.second);

	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	cout<<"\n";

	p=s.equal_range(77);			//s.end()
	cout<<*p.first<<"-";			//Segmentation fault
	cout<<*p.second<<endl;			//Segmentation fault

	return 0;
}
