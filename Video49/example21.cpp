#include<iostream>
#include<regex>
using namespace std;

int main(){

	//	\s
	
	string metin[]={" ","  ","	","\n"};//1space,2space,tab,\n
	regex reg("\\s");	//1space, tab ve \n karakterleri ile eşleşir (2space ile eşleşmez)
	
	for(string i:metin){
		cout<<i<< regex_match(i,reg)<<endl; 
	}
	
	return 0;
}
