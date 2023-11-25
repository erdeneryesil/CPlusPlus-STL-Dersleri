#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_multimap<char,char> m1 {{'A','a'},{'E','e'},{'E','f'}};
	unordered_multimap<char,char> m2{{'B','b'},{'B','d'},{'Z','z'}};
	
	m1.swap(m2);

	return 0;
}

