#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<char,int>m{{'a',11},{'a',22},{'b',33},{'b',44},{'c',55},{'d',66}};

	multimap<char,int>::value_compare kiyasla=m.value_comp();

	auto itr=m.find('b');						//{'b',33}

	auto donguItr=m.begin();
	do{
		cout<<donguItr->first<<"-"<<donguItr->second<<", ";
		donguItr++;
	}while(kiyasla(*donguItr,*itr));			//{'b',33} 'e kadar....
	
	return 0;
}
