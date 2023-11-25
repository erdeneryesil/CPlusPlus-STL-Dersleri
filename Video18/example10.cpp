#include<iostream>
#include<forward_list>

int main(){

	forward_list<int> fl1{11,22,33,44};

	forward_list<int> fl2;
	fl2=fl1;
	
	for(int i:fl1)cout<<i<<",";
	cout<<endl;
	
	for(int i:fl2)cout<<i<<",";
	cout<<endl;

	auto itr=fl1.begin();
	*itr=99;
	itr++;
	*itr=88;
	itr++;
	*itr=77;
	itr++;
	*itr=66;

	for(int i:fl1)cout<<i<<",";
	cout<<endl;
	
	for(int i:fl2)cout<<i<<",";
	cout<<endl;	
	
	return 0;
}
