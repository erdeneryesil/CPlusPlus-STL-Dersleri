#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int,char>m{{1,'a'},{2,'b'},{3,'c'},{4,'d'},{5,'e'},{6,'f'}};
	
	auto itr1=m.find(3);			//*itr1={3,'c'}
	cout<<itr1->first<<"-"<<itr1->second<<endl;		
	//cout<<(*itr1).first<<"-"<<(*itr1).second<<endl;

	map<int,char>::iterator itr2=m.find(9);	//m.end()
	cout<<itr2->first<<"-"<<(*itr2).second<<endl;

	return 0;
}
