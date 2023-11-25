#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int,char>m{{1,'a'},{2,'b'},{3,'c'},{4,'d'},{5,'e'},{6,'f'}};

	m.erase(2);			//{1,'a'},{3,'c'},{4,'d'},{5,'e'},{6,'f'}

	m.erase(m.begin());		//{3,'c'},{4,'d'},{5,'e'},{6,'f'}

	m.erase(m.find(3),m.find(6));	//{6,'f'}

	return 0;
}
