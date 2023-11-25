#include<iostream>
#include<regex>
#include<iomanip>
using namespace std;

int main(){

	// ( ) 
	
	string metin[]={"çiçek","çiçekli","çiçekler","çiçekçi"};
	regex reg("(ç)(i)\\1ek\\1\\2");	// "\" yerine "\\" kullanılmalı
	
	
	for(string i:metin){
		cout<<i<<setw(4)<<"\t"<< regex_match(i,reg)<<endl; 
	}
	
	return 0;
}
