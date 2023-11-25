#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<int> ms{11,22,22,22,44,44,44,55};

	auto itr=ms.upper_bound(11);		//22		(ilk 22)
	cout<<*itr<<"-";
	advance(itr,6);				//55
	cout<<*itr<<endl;

	itr=ms.upper_bound(22);			//44		(ilk 44)	
	cout<<*itr<<"-";
	advance(itr,3);				//55
	cout<<*itr<<endl;

	itr=ms.upper_bound(33);			//44		(ilk 44)
	cout<<*itr<<"-";
	advance(itr,3);				//55
	cout<<*itr<<endl;

	itr=ms.upper_bound(55);			//s.end()	55 ve üzeri
	cout<<*itr<<endl;

	cout<<&(*itr)<<endl;
	cout<<&(*ms.end())<<endl;
	
	return 0;
}
