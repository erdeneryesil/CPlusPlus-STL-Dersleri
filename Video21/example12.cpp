#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<char,int>m;
	m['c']=33;
	m['a']=11;
	m['e']=55;
	m['b']=22;
	m['d']=44;

	map<char,int>::key_compare kiyasla=m.key_comp();

	auto itr=m.find('d');						//{d,44}

	auto donguItr=m.begin();
	do{
		cout<<donguItr->first<<"-"<<donguItr->second<<", ";
		donguItr++;
	}while(kiyasla(donguItr->first,itr->first));			//d' ye kadar....
	
	return 0;
}
