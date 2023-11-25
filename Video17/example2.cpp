#include<iostream>
#include<list>

int main(){

	list<int>l{33,77,44,11,55,44,11,22};

	for(int i:l){
		cout<<i<<",";
	}
	cout<<"\n";

	l.sort();

	for(int i:l){
		cout<<i<<",";
	}
	cout<<"\n";

	l.unique();
	for(int i:l){
		cout<<i<<",";
	}
	cout<<"\n";

	l.reverse();
	for(int i:l){
		cout<<i<<",";
	}
	cout<<"\n";
	
	return 0;
}

