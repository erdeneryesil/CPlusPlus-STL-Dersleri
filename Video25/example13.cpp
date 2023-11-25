#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<int>s;
	
	auto itr=s.emplace_hint(s.begin(),11);		
	itr=s.emplace_hint(itr,11);			
	itr=s.emplace_hint(itr,11);			
	s.emplace_hint(s.begin(),22);			

	for(int i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}

	return 0;
}
