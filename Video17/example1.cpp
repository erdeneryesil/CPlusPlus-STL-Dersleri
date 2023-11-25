#include<iostream>
#include<list>

int main(){
	
	list<int>l{22,22,22,77,66,11,33,22,99};

	for(int i:l){
		cout<<i<<",";	
	}
	cout<<"\n";

	l.unique();
	for(int i:l){
		cout<<i<<",";	
	}
	cout<<"\n";
	
	return 0;
}
