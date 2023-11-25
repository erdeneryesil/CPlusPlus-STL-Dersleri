#include<iostream>
#include<forward_list>

int main(){

	forward_list<int>fl{66,33,44,44,11,55,66,99};

	for(int i:fl)cout<<i<<",";
	cout<<"\n";

	fl.unique();
	
	for(int i:fl)cout<<i<<",";
	cout<<"\n";

	fl.sort();
	fl.unique();
	for(int i:fl)cout<<i<<",";
	cout<<"\n";
	
	fl.reverse();
	for(int i:fl)cout<<i<<",";
	cout<<"\n";
	
	return 0;
}

