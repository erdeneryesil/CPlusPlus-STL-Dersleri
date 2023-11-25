#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	//	.
	
  	string metin ("Bu bir masal, bu bir misal, bu bir mesal, bu bir mısal.");
  	smatch eslesme;
  	regex reg("m.sal"); 

	while (regex_search (metin,eslesme,reg)) {
    		cout<<eslesme.str()<<endl;
   		metin = eslesme.suffix().str();
   		//eşleşen ifadeden sonraki ilk karakterden itibaren metin değişkenini güncelliyoruz
	}
	
	
	/*setlocale(LC_ALL, "tr_TR.utf8");//sadece wcout ile Türkçe karakterleri görüntüleyebilmek için
	wstring metin{L"Bu bir masal, bu bir misal, bu bir mesal, bu bir mısal."};
	wsmatch eslesme;
	wregex reg(L"m.sal");
		
	while (regex_search(metin,eslesme,reg)) {
    		wcout<<eslesme.str()<<endl;
   		metin = eslesme.suffix().str();
   		//eşleşen ifadeden sonraki ilk karakterden itibaren metin değişkenini güncelliyoruz
	}*/
	

  	return 0;
}
