#include <iostream>
#include <regex>

using namespace std;

int main ()
{

	string metin ("Şunu bil ki; bu bal, buralarda çok bol.");
  	regex reg("b[aio]l");	//bil,bal,bol ile eşleşir
  	
	/*
  	string sonuc=regex_replace(metin,reg,"xyz");
	cout<<sonuc<<endl;
	*/
	
	/*
	string sonuc;
	regex_replace(back_inserter(sonuc),metin.begin(),metin.end(),reg,"xyz");
	cout<<sonuc<<endl;
	*/
	
	//cout<<regex_replace(metin,reg,"$0 $1 $2",regex_constants::format_no_copy)<<endl;
	
  	return 0;
}
