#include <iostream>
#include <regex>
#include <fstream>
using namespace std;

int main ()
{
	//	$
	 	
	string satir;
	ifstream dosya("dosya.txt");
	//toplam 6 tane "güzel" var ama sadece 2 paragrafın sonundaki "güzel" kelimeleri bulunacak
	
	if (dosya.is_open()){
    		while (getline(dosya,satir) ){
    			smatch eslesme;
  			regex reg("güzel$"); 
 
    			while (regex_search (satir,eslesme,reg)) {
    				cout<<eslesme.str()<<endl;
   				satir = eslesme.suffix().str();
			}
    		}
    		dosya.close();
  	}
	
  	return 0;
}
