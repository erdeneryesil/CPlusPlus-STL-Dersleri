#include<iostream>
#include<forward_list>

int main(){

	forward_list<int> fl1{66,99,11};
	forward_list<int> fl2{22,44,77,88};

	//fl1.splice_after(fl1.begin(),fl2);

	for(int i:fl1)cout<<i<<",";
	cout<<"\n";

	auto itr=fl1.begin();
	advance(itr,1);	
	fl1.splice_after(itr,fl2);
	
	for(int i:fl1)cout<<i<<",";
	cout<<"\n";
	
	return 0;
}
