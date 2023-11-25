#include<iostream>
#include<regex>
using namespace std;

int main(){


	//	"."

	string metin[]={"masal","misal","Masal","MiSaL"};
	regex reg("m.sal");//regex reg("m.sal",regex_constants::icase);
	
	for(string i:metin){
		cout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}

	return 0;
}
