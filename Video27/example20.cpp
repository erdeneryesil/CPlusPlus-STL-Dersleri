#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_map<char,char> m1 {{'A','a'},{'C','c'},{'B','b'}};
	unordered_map<char,char> m2;
	m2=m1;

	return 0;
}
