#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

int main(){

	using benimVektor = vector<int>;
	using benimIterator = vector<int>::iterator;
	
	benimVektor v{11,22,33,44};
	benimIterator i=v.begin(); 

	cout<<*i++<<endl;
	cout<<*i++<<endl;
	cout<<*i++<<endl;
	cout<<*i++<<endl;

	return 0;
}
