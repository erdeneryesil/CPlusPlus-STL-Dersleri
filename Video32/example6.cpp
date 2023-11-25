#include<iostream>
#include<algorithm>
#include<iterator>
#include<array>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

int main(){

	//prev()

	vector<int> v{11,33,22,44,66,88,77};
	list<int> l{11,33,22,44,66,88,77};

	auto itrV=v.end();
	auto itrL=l.end();

	//itrV-=3;				//66 (vector, continuous memory)
	//itrL-=3;				//HATA(list, node based)
	
	itrL=prev(itrL,3);			//66
	itrV=prev(itrV,3);			//66

	cout<<*itrL<<"  "<<*itrV<<endl;

	//default 1
	itrL=prev(itrL);					
	itrV=prev(itrV);

	return 0;
}

