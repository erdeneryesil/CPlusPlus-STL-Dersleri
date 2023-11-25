#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<int,char>m{{1,'a'},{2,'b'},{3,'c'},{4,'d'},{1,'e'},{2,'f'},};	//aynı keyler var
	
	cout<<m.size()<<endl;
	cout<<m.max_size()<<endl;
	cout<<m.empty()<<endl;
	m.clear();
	cout<<m.empty()<<endl;
	
	return 0;
}
