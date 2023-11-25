#include<iostream>
#include<forward_list>

int main(){

	forward_list<int> fl1{22,55,99};
	forward_list<int> fl2{11,22,33,55,99};

	fl1.merge(fl2);
	
	for(int i:fl1)cout<<i<<",";
	cout<<"\n";

	cout<<distance(fl2.begin(),fl2.end())<<endl;
	
	return 0;
}
