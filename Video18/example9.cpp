#include<iostream>
#include<forward_list>

int main(){

	forward_list<int> fl{11,22,33,44};

	forward_list<int>::iterator itr1=fl.begin();
	*itr1=55;

	for(int i:fl)cout<<i<<",";
	cout<<endl;
	
	forward_list<int>::const_iterator itr2=fl.cbegin();
	cout<<*itr2<<endl;
	//*itr2=55;

	forward_list<int>::const_iterator itr3=fl.cend();

	forward_list<int>::const_iterator itr4=fl.cbefore_begin();
	
	return 0;
}
