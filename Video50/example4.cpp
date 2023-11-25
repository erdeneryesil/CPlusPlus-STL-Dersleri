#include <iostream>
#include <regex>
#include <fstream>
using namespace std;

int main ()
{
	//	^
	
	string satir;
	ifstream dosya("dosya.txt");
	
	if (dosya.is_open()){
    		while (getline(dosya,satir) ){
      			smatch eslesme;
  			regex reg("^Burası");//16 adet "Burası" var ama sadece 2 tanesi eşleşir
  			
  			while (regex_search (satir,eslesme,reg)) {
    				cout<<eslesme.str()<<endl;
   				satir = eslesme.suffix().str();
			}
    		}
    		dosya.close();
  	}
  	
  	return 0;
}
