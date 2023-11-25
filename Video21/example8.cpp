#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<char,int>m{{'d',11},{'b',22},{'c',44},{'a',33}};

	cout<<m['b']<<endl;
	cout<<m['d']<<endl;

	m['z']=99;			//yeni düğüm ekle
	m['a']=88;			//value değiştir

	for(auto i:m)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	return 0;
}
