#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	//	[[:w:]]
	
	string metin("11 Şubat 2020");
	regex reg("[[:w:]]");	//1,1,u,b,a,t ile eşleşir (Ş ile eşleşmez)
	string sonuc=regex_replace(metin,reg,"X");
	
	cout<<metin<<endl;
	cout<<sonuc<<endl;
	
	/*setlocale(LC_ALL, "tr_TR.utf8");
	wstring metin(L"11 Şubat 2020");
	wregex reg(L"[[:w:]]");	//1,1,u,b,a,t ile eşleşir (Ş ile eşleşmez)
	wstring sonuc=regex_replace(metin,reg,L"X");
	
	wcout<<metin<<endl;
	wcout<<sonuc<<endl;*/
	
  	return 0;
}
