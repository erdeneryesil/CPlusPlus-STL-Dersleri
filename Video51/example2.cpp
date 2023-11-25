#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	//	\s
	
	string metin("Bu bir deneme	yazısıdır.");//space,space,tab
	regex reg("\\s");	
	string sonuc=regex_replace(metin,reg," [boşluk] ");
	
	cout<<metin<<endl;
	cout<<sonuc<<endl;

  	return 0;
}
