#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<int> ms;
	
	multiset<int>::iterator itr;
	itr=ms.emplace_hint(ms.begin(),11);//11
	cout<<*itr<<endl;

	itr=ms.emplace_hint(itr,22);	//11,22
	cout<<*itr<<endl;

	itr=ms.emplace_hint(itr,44);	//11,22,44 	hızlı

	ms.emplace_hint(itr,33);	//11,22,33,44 	yavaş

	for(double i:ms)cout<<i<<",";
	cout<<endl;
	
	return 0;
}

