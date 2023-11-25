#include<iostream>
#include<map>
using namespace std;

int main(){
	
	map<string,int>m{{"Sinop",57},{"Ankara",6},{"İstanbul",34},{"Samsun",55}};
	
	cout<<m.at("Sinop")<<endl;

	m.at("İstanbul")=99;
	
	for(auto i:m)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;

	return 0;
}

