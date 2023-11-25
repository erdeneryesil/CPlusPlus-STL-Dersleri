#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<int> ms;
	
	auto itr=ms.insert(ms.begin(),11);	//11

	itr=ms.insert(itr,33);		//11,33 	hızlı
	itr=ms.insert(itr,66);		//11,33,66	hızlı
	itr=ms.insert(itr,44);		//11,33,44,66	yavaş
	
	return 0;
}
