#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<char,int>m{{'a',11},{'a',22},{'b',33},{'b',44},{'c',55},{'d',66}};

	multimap<char,int>::key_compare kiyasla=m.key_comp();

	auto itr=m.find('b');						//{'b',33}

	auto donguItr=m.begin();
	do{
		cout<<donguItr->first<<"-"<<donguItr->second<<", ";
		donguItr++;
	}while(kiyasla(donguItr->first,itr->first));			//{'b',33} 'e kadar....
	
	return 0;
}
