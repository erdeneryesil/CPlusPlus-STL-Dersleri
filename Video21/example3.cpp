#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int,char>m{{1,'a'},{2,'b'},{3,'c'},{4,'d'},{5,'e'},{6,'f'}};
	
	cout<<m.size()<<endl;
	cout<<m.max_size()<<endl;
	cout<<m.empty()<<endl;
	m.clear();
	cout<<m.empty()<<endl;

	return 0;
}
