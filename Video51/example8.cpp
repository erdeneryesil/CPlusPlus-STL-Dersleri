#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	//	[[:s:]]
	
	string metin("11 Şubat	2020"); //space, tab
	regex reg("[[:s:]]");
	string sonuc=regex_replace(metin,reg," (boşluk) ");
	
	cout<<metin<<endl;
	cout<<sonuc<<endl;
		
  	return 0;
}
