#include<iostream>
#include<regex>
using namespace std;

int main(){
	// (?: ) basit gruplama işlemi
	
	//string metin[]={"st","sat","saat","saaat"};
	//regex reg("sa*t");	//a karakterinin 0 veya tekrarlarını ifade eder
	
	string metin[]={"t","sat","sasat","sasasat"};
	regex reg("(?:sa)*t");	//sa ifadesinin 0 veya tekrarlarını ifade eder
	
	for(string i:metin){
		cout<<i<<"\t"<< regex_match(i,reg)<<endl; 
	}

	return 0;
}
