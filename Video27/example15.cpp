#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	std::unordered_map<string,int> m;

	bool kontrol=m.key_eq()("Selam", "selam");

	if(kontrol)
		cout<<"aynı"<<endl;
	else
		cout<<"farklı"<<endl;
	
	return 0;
}
