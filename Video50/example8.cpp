#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	//	\d
	
  	string metin ("15 Eylül 1928");
  	smatch eslesme;
  	regex reg("\\d");//1,5,1,9,2,8 ile eşleşir

	while (regex_search (metin,eslesme,reg)) {
    		cout<<eslesme.str()<<endl;
   		metin = eslesme.suffix().str();
   		//eşleşen ifadeden sonraki ilk karakterden itibaren metin değişkenini güncelliyoruz
	}
	
  	return 0;
}
