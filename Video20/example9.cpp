#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<int> ms{11,22,22,22,44,44,44,55};

	auto itr=ms.lower_bound(22);		//22		(ilk 22)
	cout<<*itr<<"-";
	advance(itr,6);				//55
	cout<<*itr<<endl;

	itr=ms.lower_bound(33);			//44		(ilk 44)
	cout<<*itr<<"-";
	advance(itr,3);				//55
	cout<<*itr<<endl;			

	itr=ms.lower_bound(44);			//44		(ilk 44)
	cout<<*itr<<"-";
	advance(itr,3);				//55
	cout<<*itr<<endl;

	itr=ms.lower_bound(55);			//55	
	cout<<*itr<<endl;

	itr=ms.lower_bound(56);			//ms.end()	
	cout<<*itr<<endl;
	
	cout<<&(*itr)<<endl;
	cout<<&(*ms.end())<<endl;
	
	return 0;
}
