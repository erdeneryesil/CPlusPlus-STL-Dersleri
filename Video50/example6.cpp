#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	//	[^c1c2c3]
	
  	string metin ("Aldım bir kaz. Gördüm bir kız. Oldum ben köz. On kez. Bir öküz.");
  	smatch eslesme;
  	regex reg("k[^aıö]z");//kez ve küz ile eşleşmesi gerekiyor.kaz,kız,köz ile eşleşmez

	while (regex_search (metin,eslesme,reg)) {
    		cout<<eslesme.str()<<endl;
   		metin = eslesme.suffix().str();
   		//eşleşen ifadeden sonraki ilk karakterden itibaren metin değişkenini güncelliyoruz
	}
	
	
	/*
	setlocale(LC_ALL, "tr_TR.utf8");//sadece wcout ile Türkçe karakterleri görüntüleyebilmek için
	wstring metin{L"Aldım bir kaz. Gördüm bir kız. Oldum ben köz. On kez. Bir öküz."};
	wsmatch eslesme;
	wregex reg(L"k[^aıö]z");
		
	while (regex_search(metin,eslesme,reg)) {
    		wcout<<eslesme.str()<<endl;
   		metin = eslesme.suffix().str();
   		//eşleşen ifadeden sonraki ilk karakterden itibaren metin değişkenini güncelliyoruz
	}
	*/

  	return 0;
}
