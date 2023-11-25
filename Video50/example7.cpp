#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	//	|
	
  	string metin ("Oğlanın adı Ali, Veli ya da Mehmet. Kızınki Ayşe ya da Fatma");
  	smatch eslesme;
  	regex reg("Ali|Veli|Ayşe");

	while (regex_search (metin,eslesme,reg)) {
    		cout<<eslesme.str()<<endl;
   		metin = eslesme.suffix().str();
   		//eşleşen ifadeden sonraki ilk karakterden itibaren metin değişkenini güncelliyoruz
	}
	
  	return 0;
}
