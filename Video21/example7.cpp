#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<char,string>m;
	
	//m.emplace({'b',"bb"});  HATA
	m.emplace(pair<char,string>('b',"bb"));	//{'b',"bb"}
	m.emplace('d',"dd");	//{'b',"bb"},{'d',"dd"}
	
	//emplace_hint aramanın yapılmaya başlanacağı konumu veriyoruz ipucu olarak
	m.emplace_hint(m.find('b'),'c',"cc");	//verimli  
		//{'b',"bb"},{'c',"cc"},{'d',"dd"}

	m.emplace_hint(m.find('b'),'a',"aa");	//verimsiz
		//{'a',"aa"},{'b',"bb"},{'c',"cc"},{'d',"dd"}
	
	for(pair<char,string> i:m)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	return 0;
}
