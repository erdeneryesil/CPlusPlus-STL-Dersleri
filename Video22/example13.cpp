#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<int,char>m{{1,'a'},{2,'b'},{2,'c'},{2,'d'},{4,'e'},{4,'f'},{5,'g'},{6,'h'}};

	auto itr=m.lower_bound(2);	//{2,'b'}
	cout<<itr->first<<"-"<<itr->second<<endl;

	itr=m.lower_bound(3);		//{4,'e'}
	cout<<itr->first<<"-"<<itr->second<<endl;

	itr=m.lower_bound(6);		//{6,'h'}
	cout<<itr->first<<"-"<<itr->second<<endl;

	itr=m.lower_bound(7);		//m.end()
	cout<<itr->first<<"-"<<itr->second<<endl;
	
	return 0;
}
