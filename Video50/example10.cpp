#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	//	[[:upper:]]
	
  	string metin ("Sinop, Çorum, Ordu, Giresun");
  	smatch eslesme;
  	regex reg("[[:upper:]]");//S,O,G ile eşleşir

	while (regex_search (metin,eslesme,reg)) {
    		cout<<eslesme.str()<<endl;
   		metin = eslesme.suffix().str();
   		//eşleşen ifadeden sonraki ilk karakterden itibaren metin değişkenini güncelliyoruz
	}
	
	
	/*
	setlocale(LC_ALL, "tr_TR.utf8");
	wstring metin(L"Sinop, Çorum, Ordu, Giresun");
	wsmatch eslesme;
	wregex reg(L"[[:upper:]]");	
	
	while (regex_search(metin,eslesme,reg)) {
    		wcout<<eslesme.str()<<endl;
   		metin = eslesme.suffix().str();
   		//eşleşen ifadeden sonraki ilk karakterden itibaren metin değişkenini güncelliyoruz
	}
	*/
	
  	return 0;
}

