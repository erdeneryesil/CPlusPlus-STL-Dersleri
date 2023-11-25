#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	std::unordered_multimap<char,int> m;

	bool kontrol=m.key_eq()('a', 'A');

	if(kontrol)
		cout<<"aynı"<<endl;
	else
		cout<<"farklı"<<endl;

	return 0;
}
