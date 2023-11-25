#include<iostream>
#include<regex>
using namespace std;

int main(){

	//	?
	
	string metin[]={"tar","tara","tarak","tarakk"};
	regex reg("tarak?");	//tara, tarak ile eşleşir
	
	for(string i:metin){
		cout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	
	return 0;
}
