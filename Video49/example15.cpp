#include<iostream>
#include<regex>
using namespace std;

int main(){
	
	//	{}
	
	string metin[]={"kaç","kaça","kaçak","kaççak"};
	regex reg("kaç{2}ak");	//kaççak ile eşleşmesi gerekiyor
	
	for(string i:metin){
		cout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	
	
	/*
	setlocale(LC_ALL, "tr_TR.utf8");//sadece wcout ile Türkçe karakterleri görüntüleyebilmek için
	wstring metin[]={L"kaç",L"kaça",L"kaçak",L"kaççak"};
	
	wregex reg(L"kaç{2}ak");	
	
	for(wstring i:metin){
		wcout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}
	*/
	
	return 0;
}
