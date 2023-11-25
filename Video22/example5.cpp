#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<int,char>m{{1,'a'},{2,'b'},{3,'c'},{2,'d'},{2,'e'},{4,'f'}};
	//{1,'a'} {2,'b'} {2,'d'} {2,'e'} {3,'c'} {4,'f'}

	auto itr1=m.find(2);			//*itr1={2,'b'}	key içeren ilk düğümü işaret eder
	cout<<itr1->first<<"-"<<(*itr1).second<<endl;

	itr1=m.find(3);				//*itr1={3,'c'}
	cout<<itr1->first<<"-"<<(*itr1).second<<endl;

	multimap<int,char>::iterator itr2=m.find(5);	//m.end()
	cout<<itr2->first<<"-"<<(*itr2).second<<endl;
	
	return 0;
}
