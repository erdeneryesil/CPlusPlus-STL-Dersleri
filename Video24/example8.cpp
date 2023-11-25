#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	std::unordered_set<string> s;

	bool kontrol=s.key_eq()("selam","Selam");

	if(kontrol)
		cout<<"aynı"<<endl;
	else
		cout<<"farklı"<<endl;

	return 0;
}
