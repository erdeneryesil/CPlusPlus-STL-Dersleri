#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_multimap<int,char> m{{1,'s'},{1,'b'},{1,'r'},{3,'s'}};
	
	cout<<m.load_factor()<<endl;
	cout<<m.max_load_factor()<<endl;
	
	m.max_load_factor(1.5);

	cout<<m.load_factor()<<endl;
	cout<<m.max_load_factor()<<endl;

	return 0;
}
