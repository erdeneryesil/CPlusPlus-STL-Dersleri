#include<iostream>
#include<set>
using namespace std;

int main(){

	set<int> s{11,22,44,55};

	auto itr=s.equal_range(22);		
	cout<<*itr.first<<"-";			//22  lower_bound
	cout<<*itr.second<<endl;		//44  upper_bound

	itr=s.equal_range(33);			
	cout<<*itr.first<<"-";			//44  lower_bound
	cout<<*itr.second<<endl;		//44  upper_bound

	itr=s.equal_range(44);			
	cout<<*itr.first<<"-";			//44  lower_bound
	cout<<*itr.second<<endl;		//55  upper_bound
	
	itr=s.equal_range(66);				
	cout<<*itr.first<<"-";			//s.end()
	cout<<*itr.second<<endl;		//s.end()

	cout<<&(*itr .first)<<endl;		
	cout<<&(*itr.second)<<endl;
	cout<<&(*s.end())<<endl;
	
	return 0;
}
