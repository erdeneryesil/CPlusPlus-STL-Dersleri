#include <iostream>
#include <regex>

using namespace std;

int main ()
{
	//	[[:xdigit:]]
	
  	string metin ("4fc=1276 9BD=2493 ghiJKL");
  	smatch eslesme;
  	regex reg("[[:xdigit:]]");//0-9a-fA-F (ghiJKL ile eşleşmez)

	while (regex_search (metin,eslesme,reg)) {
    		cout<<eslesme.str()<<endl;
   		metin = eslesme.suffix().str();
	}
	
  	return 0;
}

