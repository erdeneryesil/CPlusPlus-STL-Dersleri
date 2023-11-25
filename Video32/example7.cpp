#include<iostream>
#include<algorithm>
#include<iterator>
#include<array>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

int main(){

	//next()

	vector<int> v{11,33,22,44,66,88,77};
	list<int> l{11,33,22,44,66,88,77};

	auto itrV=v.begin();
	auto itrL=l.begin();

	//itrV+=4;				//66 (vector, continuous memory)
	//itrL+=4;				//HATA(list, node based)
	
	itrL=next(itrL,4);			//66
	itrV=next(itrV,4);			//66

	cout<<*itrL<<"  "<<*itrV<<endl;

	//default 1
	itrL=next(itrL);					
	itrV=next(itrV);

	return 0;
}

