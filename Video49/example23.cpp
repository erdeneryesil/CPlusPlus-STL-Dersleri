#include<iostream>
#include<regex>
using namespace std;

int main(){
	
	//	[[:alnum:]]
	
	string metin[]={"a","Z","0","9","!","?","ç","ö"};
	regex reg("[[:alnum:]]"); //Türkçe karakterler ile eşleşmez
	
	for(string i:metin){
		cout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	
	/*
	setlocale(LC_ALL, "tr_TR.utf8");//sadece wcout ile Türkçe karakterleri görüntüleyebilmek için
	wstring metin[]={L"a",L"Z",L"0",L"9",L"!",L"?",L"ç",L"ö"};
	wregex reg(L"[[:alnum:]]");	//Türkçe karakterler ile eşleşmez
	
	for(wstring i:metin){
		wcout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	*/

	return 0;
}

