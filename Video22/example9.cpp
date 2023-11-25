#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<int,char>m{{1,'a'},{2,'b'},{3,'c'},{1,'d'},{2,'e'},{3,'f'}};
	//{1,'a'},{1,'d'},{2,'b'},{2,'e'},{3,'c'},{3,'f'}

	m.erase(2);			//{1,'a'},{1,'d'},{3,'c'},{3,'f'}

	m.erase(m.begin());		//{1,'d'},{3,'c'},{3,'f'}

	m.erase(m.begin(),m.end());	//
	
	return 0;
}
