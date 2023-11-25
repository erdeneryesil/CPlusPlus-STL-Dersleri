#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_multimap<char,char> m1 {{'A','a'},{'A','b'},{'B','b'}};
	unordered_multimap<char,char> m2;
	m2=m1;

	return 0;
}
