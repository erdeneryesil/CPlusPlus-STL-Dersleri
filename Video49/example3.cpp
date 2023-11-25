#include<iostream>
#include<regex>
using namespace std;

int main(){

	//	"."

	string metin[]={"masal","misal","müsal","mısal"};
	regex reg("m.sal");	//masal,misal,müsal,mısal ile eşleşmesi gerekiyor
	
	for(string i:metin){
		cout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	
	/*
	setlocale(LC_ALL, "tr_TR.utf8");//sadece wcout ile Türkçe karakterleri görüntüleyebilmek için
	wstring metin[]={L"masal",L"misal",L"müsal",L"mısal"};
	wregex reg(L"m.sal");	
	
	for(wstring i:metin){
		wcout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	*/

	return 0;
}
