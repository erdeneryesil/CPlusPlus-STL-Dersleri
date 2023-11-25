#include<iostream>
#include<set>
using namespace std;

int main(){

	set<int> s{11,22,33,44,55,66,77};
	set<int>::key_compare kiyasla=s.key_comp();
	
	auto itr=s.rbegin();		//77		
	advance(itr,2);			//55
	int deger=*itr;			//55

	auto donguItr=s.begin();
	do{
		cout<<*donguItr<<",";
		donguItr++;
	}while(kiyasla(*donguItr,deger));
	
	return 0;
}
