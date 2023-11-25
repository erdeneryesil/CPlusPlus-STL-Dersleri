#include <iostream>
#include <regex>

using namespace std;

int main ()
{
  	string metin ("Bu sabah hava çok güneşli.");
  	smatch eslesme;
  	regex reg("sabah"); 

	regex_search (metin,eslesme,reg);
	cout<<eslesme.str()<<endl;		//arama sonucunda bulunan "sabah" kelimesi
    	cout<<eslesme.prefix().str()<<endl;	//"sabah" kelimesinden öncesi : "Bu "
    	cout<<eslesme.suffix().str()<<endl;	//"sabah" kelimesinden sonrası : " hava çok güneşli."
    	
  	return 0;
}
