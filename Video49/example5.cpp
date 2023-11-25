#include<iostream>
#include<regex>
using namespace std;

int main(){
	
	//	"*"
	
	string metin[]={"kaak","kaçak","kaççak","kaçççak"};
	regex reg("kaç*ak");	//kaak,kaçak,kaççak,kaçççak ile eşleşmesi gerekiyor
	
	for(string i:metin){
		cout<<i<<"\t"<<regex_match(i,reg)<<endl; 
	}
	
	/*
	setlocale(LC_ALL, "tr_TR.utf8");//sadece wcout ile Türkçe karakterleri görüntüleyebilmek için
	wstring metin[]={L"kaak",L"kaçak",L"kaççak",L"kaçççak"};
	wregex reg(L"kaç*ak");	
	
	for(wstring i:metin){
		wcout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	*/

	return 0;
}
