#include<iostream>
#include<forward_list>

int main(){

	forward_list<int> fl{11,22,33,44};
	
	forward_list<int>::iterator itr1=fl.begin();
	cout<<*itr1<<endl;

	forward_list<int>::iterator itr2=fl.before_begin();	
	cout<<*itr2<<endl;
	fl.insert_after(itr2,99);

	for(int i:fl)cout<<i<<",";
	cout<<endl;
	
	return 0;
}
