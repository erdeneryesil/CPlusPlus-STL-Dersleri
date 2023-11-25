#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	
	string metin("Doğum tarihi 31 Ocak 1986.");
	regex reg("[[:digit:]]");	
	string sonuc=regex_replace(metin,reg,"X");
	
	cout<<metin<<endl;
	cout<<sonuc<<endl;

  	return 0;
}
