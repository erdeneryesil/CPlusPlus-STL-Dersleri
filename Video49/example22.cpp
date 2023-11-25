#include<iostream>
#include<regex>
using namespace std;

int main(){
	
	//	     \S
	
	string metin[]={" ","  ","	","\n","a","Z","0","9","!","?","ç","Ö"};
		//1space,2space,tab,\n...
	regex reg("\\S");//a,Z,0,9,!,?,ç,Ö ile eşleşmesi gerekiyor 
		//(2space ile de eşleşmez çünkü karakter değil, karakter dizisi)
	
	for(string i:metin){
		cout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	
	/*
	setlocale(LC_ALL, "tr_TR.utf8");//sadece wcout ile Türkçe karakterleri görüntüleyebilmek için
	wstring metin[]={L" ",L"  ",L"	",L"\n",L"a",L"Z",L"0",L"9",L"!",L"?",L"ç",L"Ö"};
		//1space,2space,tab,\n...
	wregex reg(L"\\S");
		
	for(wstring i:metin){
		wcout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	*/
	
	return 0;
}
