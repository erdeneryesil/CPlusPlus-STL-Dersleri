#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<int> ms{11,22,22,22,44,44,44,55};

	auto itr=ms.find(22);			//ilk 22
	cout<<*itr<<endl;
	advance(itr,6);
	cout<<*itr<<endl;


	itr=ms.find(33);			//ms.end();
	cout<<*itr<<endl;

	cout<<&(*itr)<<endl;
	cout<<&(*ms.end())<<endl;
	
	return 0;
}
