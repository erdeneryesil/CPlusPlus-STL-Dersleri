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

input iterator

X b(a)	(kopyalama kurucusu)
b=a 	(kopya atama)
++ 	(işaret edilen adresi 1 ilerletme)
== 	(eşit mi?)
!=	(farklı mı?)
* 	(işaret edilen değeri OKUMA)

*/


	double d1,d2,d3;
  	cout << "3 tane double değer giriniz: \n";

  	istream_iterator<double> itr(cin);  
	d1=*itr;					//*
	itr++;						//++
	d2=*itr;
	itr++;
	d3=*itr;

  	cout << d1 << " " << d2 << " " << d3 << endl;

	istream_iterator<double>itr2=itr;		//b=a
	istream_iterator<double>itr3(itr);		//X b(a)
	
	cout<<"*itr="<<*itr<<endl;
	cout<<"*itr2="<<*itr2<<endl;
	cout<<"*itr3="<<*itr3<<endl;

	if(itr==itr2)cout<<"aynı"<<endl;		//==
				
	if(itr!=itr2)cout<<"farklı"<<endl;		//!=

	//itr+=2;						//HATA
	//itr--;						//HATA

	return 0;
}

