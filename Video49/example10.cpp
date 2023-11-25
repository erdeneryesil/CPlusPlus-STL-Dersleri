#include<iostream>
#include<regex>
using namespace std;

int main(){

	//	+
	
	string metin[]={"st","sat","saat","saaat"};
	regex reg("sa+t");	//sat,saat,saaat ile eşleşir
	
	for(string i:metin){
		cout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	
	return 0;
}
