#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<char> ms{'c','b','d','a','e','c'};		
	// a,b,c,c,d,e 

	multiset<char>::iterator itr;
	itr=ms.begin();				//*itr='a'
	itr++;					//*itr='b'
	*itr='x';				//HATA

	itr=ms.end();				
	itr--;					//*itr='e'
	*itr='x';				//HATA			
	
	multiset<char>::reverse_iterator ritr;
	ritr=ms.rbegin();			//*ritr='e'	
	ritr++;					//*ritr='d'
	*ritr='x';				//HATA

	ritr=ms.rend();				
	ritr--;					//*ritr='a'
	*ritr='x';				//HATA	

	multiset<char>::const_iterator citr;	
	citr=ms.cbegin();			//*citr='a'	
	citr++;					//*citr='b'
	*citr='x';				//HATA

	citr=ms.cend();				
	citr--;					//*citr='e'
	*citr='x';				//HATA	

	multiset<char>::const_reverse_iterator critr;
	critr=ms.crbegin();			//*critr='e'	
	critr++;				//*critr='d'
	*critr='x';				//HATA

	critr=ms.crend();				
	critr--;				//*critr='a'
	*critr='x';				//HATA	
	
	return 0;
}
