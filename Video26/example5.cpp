#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	std::unordered_multiset<double> s;

	bool kontrol=s.key_eq()(11.99, 11.98);

	if(kontrol)
		cout<<"aynı"<<endl;
	else
		cout<<"farklı"<<endl;
	
	return 0;
}
