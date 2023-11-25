#include<iostream>
#include<set>
using namespace std;

int main(){
	
	set<int>s;
	
	set<int>::iterator itr;
	itr=s.emplace_hint(s.begin(),11);//11
	cout<<*itr<<endl;

	itr=s.emplace_hint(itr,22);	//11,22
	cout<<*itr<<endl;

	itr=s.emplace_hint(itr,44);	//11,22,44 hızlı
	itr=s.emplace_hint(itr,33);	//11,22,33,44 yavaş

	for(int i:s)cout<<i<<",";
	cout<<endl;
	
	return 0;
}

