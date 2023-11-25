#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	//	[[:d:]]
	
	string metin("11 Ocak 2020");
	regex reg("[[:d:]]");	//1,1,2,0,2,0 ile eşleşir
	string sonuc=regex_replace(metin,reg,"X");
	
	cout<<metin<<endl;
	cout<<sonuc<<endl;
	
  	return 0;
}
