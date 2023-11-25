#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<int> ms{11,22,33,44,55,55,66,77};
	multiset<int>::key_compare kiyasla=ms.key_comp();

	auto itr=ms.rbegin();		//77		
	advance(itr,3);			//55 
	int deger=*itr;			//55

	auto donguItr=ms.begin();
	do{
		cout<<*donguItr<<",";
		donguItr++;
	}while(kiyasla(*donguItr,deger));
	
	return 0;
}
