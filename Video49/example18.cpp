#include<iostream>
#include<regex>
using namespace std;

int main(){

	//	\t
	
	string metin[]={" ","  ","   ","    ","	"};//1space,2space,3space,4space,tab
	regex reg("\\t");
	
	for(string i:metin){
		cout<<i<<":"<< regex_match(i,reg)<<endl; 
	}

	return 0;
}
