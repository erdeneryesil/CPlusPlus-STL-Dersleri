#include<iostream>
#include<regex>
using namespace std;

int main(){

	//	[^c1-c2]
	
	string metin[]={"a","Z","0","9","!","?","ç","Ö"};
	regex reg("[^A-Za-z0-9]");//!,?,ç,Ö ile eşleşmesi gerekiyor
	
	for(string i:metin){
		cout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	
	
	/*
	setlocale(LC_ALL, "tr_TR.utf8");//sadece wcout ile Türkçe karakterleri görüntüleyebilmek için
	wstring metin[]={L"a",L"Z",L"0",L"9",L"!",L"?",L"ç",L"Ö"};
	wregex reg(L"[^A-Za-z0-9]");
	
	for(wstring i:metin){
		wcout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	*/
	
	return 0;
}
