#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<char> s{'a','b','c','b','d','z','b'};

	for(char i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	cout<<"\n";
	
	unordered_multiset<char>::iterator itr;

	itr=s.begin();
	cout<<*itr<<endl;

	itr++;
	cout<<*itr<<endl;
	//*itr='T';		//HATA

	unordered_multiset<char>::local_iterator locitr;

	locitr=s.begin(0);				
	cout<<*locitr<<endl;			//b

	locitr++;
	cout<<*locitr<<endl;			//b

	locitr++;
	cout<<*locitr<<endl;			//b

	locitr++;
	cout<<*locitr<<endl;			//Segmentation fault
	
	return 0;
}
