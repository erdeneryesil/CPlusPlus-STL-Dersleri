#include<iostream>
#include<regex>
using namespace std;

int main(){
	
	//	?
	
	string metin[]={"far","fara","faraş"};
	regex reg("faraş?");	//fara,faraş ile eşleşmesi gerekiyor
	
	for(string i:metin){
		cout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	
	
	/*
	setlocale(LC_ALL, "tr_TR.utf8");//sadece wcout ile Türkçe karakterleri görüntüleyebilmek için
	wstring metin[]={L"far",L"fara",L"faraş"};
	wregex reg(L"faraş?");	
	
	for(wstring i:metin){
		wcout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	*/
	
	return 0;
}
