#include<iostream>
#include<algorithm>
#include<iterator>
#include<array>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

int main(){

	//advance()

	vector<int> v{11,33,22,44,66,88,77};
	vector<int>::iterator itrV=v.begin();	//11

	list<int> l{11,33,22,44,66,88,77};	
	list<int>::iterator itrL=l.begin();	//11

	itrV++;					//33
	itrL++;					//33

	//itrV+=5;				//77 (vector, continuous memory)
	//itrL+=5;				//HATA(list, node based)
	
	advance(itrL,5);			//77
	advance(itrV,5);			//77

	cout<<*itrV<<"-"<<*itrL<<endl;

	return 0;
}

