#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_multimap<char,char> m {{'A','a'},{'A','a'},{'B','b'}};
	unordered_multimap<char,char> m1 {{'B','b'},{'A','a'},{'A','a'}};
	unordered_multimap<char,char> m2 {{'A','a'},{'C','c'},{'B','b'}};
	unordered_multimap<char,char> m3 {{'D','d'},{'E','e'},{'F','f'}};

	if(m!=m1)cout<<"m ve m1 farklıdır"<<endl;
	else cout<<"m ve m1 aynıdır"<<endl;

	if(m!=m2)cout<<"m ve m2 farklıdır"<<endl;
	else cout<<"m ve m2 aynıdır"<<endl;

	if(m!=m3)cout<<"m ve m3 farklıdır"<<endl;
	else cout<<"m ve m3 aynıdır"<<endl;

	return 0;
}
