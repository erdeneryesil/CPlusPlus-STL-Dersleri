#include<iostream>
#include<algorithm>
#include<iterator>
#include<array>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

int main(){

/*

random access iterator

X b		(default kurucu)
X b(a)		(kopyalama kurucusu)
b=a 		(kopya atama)
++ 		(işaret edilen adresi 1 ilerletme)
+=		(işaret edilen adresi n ilerletme)
-- 		(işaret edilen adresi 1 azaltma)
-=		(işaret edilen adresi n azaltma)
== 		(eşit mi?)
!=		(farklı mı?)
<,<=,>,>= 	(ilişkisel operatörler)
* 		(işaret edilen değeri OKUMA ve DEĞİŞTİRME)
[]		(indis kullanarak herhangi bir adrese erişme)

*/


	vector<int> fl{11,22,33,44,55,66,77,88,99};
	
	vector<int>::iterator itr;		//default kurucu
	itr=fl.begin();
	
	cout<<itr[8]<<endl;			//[] ile okuma	
	itr[8]=9000;				//[] ile değiştirme
	
	vector<int>::iterator itr2(itr);	//kopyalama kurucusu
	
	vector<int>::iterator itr3=itr;		//kopya atama

	itr++;					//++
	itr+=3;					//+n
	itr--;					//--		
	itr-=2;					//-n

	if(itr==itr2)cout<<"aynı"<<endl;		//==

	if(itr!=itr2)cout<<"farklı"<<endl;		//!=

	if(itr<=itr2)cout<<"itr<=itr2"<<endl;		//<,<=
	
	if(itr>=itr3)cout<<"itr>=itr3"<<endl;		//>,>=

	cout<<*itr<<endl;			//* ile değere erişme
	*itr=9876;				//* ile değeri değiştirme

	return 0;
}
