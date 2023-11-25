#include<iostream>
#include<set>
using namespace std;

int main(){
	
	set<int>s;
	
	set<int>::iterator itr;
	itr=s.insert(s.begin(),11);//11
	cout<<*itr<<endl;

	itr=s.insert(itr,22);	//11,22
	cout<<*itr<<endl;

	itr=s.insert(itr,44);	//11,22,44 hızlı
	itr=s.insert(itr,33);	//11,22,33,44 yavaş

	for(int i:s)cout<<i<<",";
	cout<<endl;
	
	return 0;
}
