#include<iostream>
#include<set>
using namespace std;

int main(){

	set<char> s{'c','b','d','a','e'};		// a,b,c,d,e 
	
	set<char>::iterator itr;
	itr=s.begin();					//*itr='a'
	//*itr='x';					//HATA
	itr++;						//*itr='b'

	itr=s.end();
	itr--;						//*itr='e'
	//*itr='x';					//HATA
	
	set<char>::reverse_iterator ritr;
	ritr=s.rbegin();				//*ritr='e'
	//*ritr='x';					//HATA
	ritr++;						//*ritr='d'

	ritr=s.rend();
	ritr--;						//*ritr='a'
	//*ritr='x';					//HATA

	set<char>::const_iterator citr;
	citr=s.cbegin();				//*citr='a'
	//*citr='x';					//HATA
	citr++;						//*citr='b'

	citr=s.cend();			
	citr--;						//*citr='e'
	//*citr='x';					//HATA

	set<char>::const_reverse_iterator critr;
	critr=s.crbegin();				//*critr='e'
	//*critr='x';					//HATA
	critr++;					//*critr='d'
	
	critr=s.crend();							
	critr--;					//*critr='a'		
	//*critr='x';					//HATA
	
	return 0;
}
