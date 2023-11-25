#include<iostream>
#include<regex>
using namespace std;


int main(){

	string metin="deneme";
	regex reg("deneme");
	
	bool sonuc=regex_match(metin,reg);
	cout<<sonuc<<endl;

	return 0;
}
