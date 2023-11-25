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

forward iterator

X b	(default kurucu)
X b(a)	(kopyalama kurucusu)
b=a 	(kopya atama)
++ 	(işaret edilen adresi 1 ilerletme)
== 	(eşit mi?)
!=	(farklı mı?)
* 	(işaret edilen değeri OKUMA ve DEĞİŞTİRME)

*/


	forward_list<double> fl{11.22, 33.44, 55.66};

	forward_list<double>::iterator itr;		//default kurucu
	itr=fl.begin();
	
	forward_list<double>::iterator itr2(itr);	//kopyalama kurucusu
	
	forward_list<double>::iterator itr3=itr;	//kopya atama

	if(itr==itr2)cout<<"aynı"<<endl;		//==

	if(itr!=itr2)cout<<"farklı"<<endl;		//!=


	cout<<*itr<<endl;				//* ile değere erişme
	*itr=99.99;	//* ile değeri değiştirme (11.22 yerine 99.99 değeri atandı)
	cout<<*itr<<endl;
	
	itr++;						//++
	cout<<*itr<<endl;
	itr++;
	cout<<*itr<<endl;

	//itr--;					//HATA

	return 0;
}
