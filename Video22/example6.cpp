#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<int,char>m{{1,'a'},{2,'b'},{3,'c'},{2,'d'},{2,'e'},{4,'f'}};
	//{1,'a'} {2,'b'} {2,'d'} {2,'e'} {3,'c'} {4,'f'}

	m.count(2);		//3
	m.count(5);		//0
	
	return 0;
}
