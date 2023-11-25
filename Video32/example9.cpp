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

output iterator

X b(a)	(kopyalama kurucusu)
b=a 	(kopya atama)
++ 	(işaret edilen adresi 1 ilerletme)
*	(işaret edilen değeri DEĞİŞTİRME)

*/


	ostream_iterator<double> itr(cout," bu bir double sayıdır\n");
	
	*itr=11.22;				//* ile atama yapılabilir
	//55.66=*itr;				//HATA * ile erişilemez

	itr++;					//++
	//itr--;				//HATA
	
	ostream_iterator<double> itr2(itr);	//X b(a)
	ostream_iterator<double> itr3=itr;	//b=a

	//if(itr==itr2)cout<<"aynı"<<endl;		//HATA

	//if(itr!=itr3)cout<<"farklı"<<endl;		//HATA

	return 0;
}
