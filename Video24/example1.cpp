#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
	
	unordered_set<char> s{'a','b','c','d','z'};

	for(char i:s){
		cout<<i<<"-"<<s.bucket(i)<<", ";
	}
	cout<<"\n";
	

	unordered_set<char>::iterator itr;

	itr=s.begin();
	cout<<*itr<<endl;

	itr++;
	cout<<*itr<<endl;

	itr++;
	cout<<*itr<<endl;

	itr++;
	cout<<*itr<<endl;

	itr++;
	cout<<*itr<<endl;

	unordered_set<char>::local_iterator locitr;

	locitr=s.begin(2);				
	cout<<*locitr<<endl;			//z

	locitr++;
	cout<<*locitr<<endl;			//a

	locitr++;
	cout<<*locitr<<endl;			//segmentation fault
		
	return 0;
}
