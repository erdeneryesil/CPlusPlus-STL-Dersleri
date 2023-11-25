#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	//	.
	
	string metin("gördüğün yer ufuk, dudağında çıkmasın uçuk");
	regex reg("u.uk");	//ufuk ve uçuk ile eşleşmesi gerekiyor
	string sonuc=regex_replace(metin,reg,"xyz");
	
	cout<<metin<<endl;
	cout<<sonuc<<endl;
	
	/*
	setlocale(LC_ALL, "tr_TR.utf8");
	wstring metin(L"gördüğün yer ufuk, dudağında çıkmasın uçuk");
	wregex reg(L"u.uk");	//ufuk ve uçuk ile eşleşir
	wstring sonuc=regex_replace(metin,reg,L"xyz");
	
	wcout<<metin<<endl;
	wcout<<sonuc<<endl;
	*/

  	return 0;
}
