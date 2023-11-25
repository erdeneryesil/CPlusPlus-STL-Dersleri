#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_map<char,char> m1 {{'A','a'},{'E','e'},{'O','o'}};
	unordered_map<char,char> m2{{'B','b'},{'D','d'},{'Z','z'}};
	
	m1.swap(m2);

	return 0;
}
