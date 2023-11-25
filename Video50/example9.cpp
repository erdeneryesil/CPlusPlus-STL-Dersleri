#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	//	\D

  	string metin ("15 Eylül 1928");
  	smatch eslesme;
  	regex reg("\\D");//(boşluk),E,y,l,ü,l,(boşluk) ile eşleşmesi gerekir

	while (regex_search (metin,eslesme,reg)) {
    		cout<<eslesme.str()<<endl;
   		metin = eslesme.suffix().str();
   		//eşleşen ifadeden sonraki ilk karakterden itibaren metin değişkenini güncelliyoruz
	}
	
	/*
	setlocale(LC_ALL, "tr_TR.utf8");//sadece wcout ile Türkçe karakterleri görüntüleyebilmek için
	wstring metin(L"15 Eylül 1928");
	wsmatch eslesme;
	wregex reg(L"\\D");	// [^0-9]
	
	while (regex_search(metin,eslesme,reg)) {
    		wcout<<eslesme.str()<<endl;
   		metin = eslesme.suffix().str();
   		//eşleşen ifadeden sonraki ilk karakterden itibaren metin değişkenini güncelliyoruz
	}
	*/
	
  	return 0;
}

