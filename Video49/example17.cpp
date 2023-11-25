#include<iostream>
#include<iomanip>
#include<regex>
using namespace std;

int main(){

	//	{i,j}

	string metin[]={"kaç","kaça","kaçak","kaççak","kaçççak","kaççççak"};
	regex reg("kaç{1,3}ak");	//kaçak,kaççak,kaçççak ile eşleşmesi gerekiyor
	
	for(string i:metin){
		cout<<i<<setw(6)<<"\t"<< regex_match(i,reg)<<endl; 
	}
	
	
	/*
	setlocale(LC_ALL, "tr_TR.utf8");//sadece wcout ile Türkçe karakterleri görüntüleyebilmek için
	wstring metin[]={L"kaç",L"kaça",L"kaçak",L"kaççak",L"kaçççak",L"kaççççak"};
	wregex reg(L"kaç{1,3}ak");	
	
	for(wstring i:metin){
		wcout<<i<<setw(6)<<"\t"<< regex_match(i,reg)<<endl; 
	}
	*/
	
	return 0;
}
