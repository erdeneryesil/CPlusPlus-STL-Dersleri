#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_set<int> s{11,22,44,55,66};
	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	cout<<"\n";

	pair<unordered_set<int>::iterator,unordered_set<int>::iterator>p;
	
	p=s.equal_range(22);
	cout<<*p.first<<"-";		
	cout<<*p.second<<endl;

	p=s.equal_range(77);			//s.end()
	cout<<*p.first<<"-";			//Segmentation fault
	cout<<*p.second<<endl;			//Segmentation fault
	
	return 0;
}
