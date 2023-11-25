#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<int,char>m{{1,'a'},{2,'b'},{3,'c'},{4,'d'},{5,'e'},{6,'f'}};

	m.count(2);		//1
	m.count(9);		//0

	return 0;
}
