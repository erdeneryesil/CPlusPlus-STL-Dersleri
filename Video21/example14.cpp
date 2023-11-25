#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int,char>m{{1,'a'},{2,'b'},{4,'d'},{5,'e'},{6,'f'}};

	auto itr=m.lower_bound(2);	//{2,'b'}
	cout<<itr->first<<"-"<<itr->second<<endl;

	itr=m.lower_bound(3);		//{4,'d'}
	cout<<itr->first<<"-"<<itr->second<<endl;

	itr=m.lower_bound(6);		//{6,'f'}
	cout<<itr->first<<"-"<<itr->second<<endl;

	itr=m.lower_bound(7);		//m.end()
	cout<<itr->first<<"-"<<itr->second<<endl;

	cout<<&(*itr)<<endl;
	cout<<&(*m.end())<<endl;
	
	return 0;
}
