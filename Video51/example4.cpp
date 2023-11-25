#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	//	{}
	
	string metin("200g, 500g, 1000g, 2000g");
	regex reg("0{3}");	
	string sonuc=regex_replace(metin,reg,"k");
	
	cout<<metin<<endl;
	cout<<sonuc<<endl;

  	return 0;
}
