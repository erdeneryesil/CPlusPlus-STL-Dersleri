#include<iostream>
#include<algorithm>
#include<iterator>
#include<array>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

int main(){

	//distance()

	vector<int> v{11,33,22,44,66,88,77};
	
	int fark;
	
	fark=v.begin()-v.end();			//-7 (vector, continuous memory)
	fark=distance(v.begin(),v.end());	
	cout<<fark<<endl;			//7

	list<int> l{11,33,22,44,66,88,77};	
	//fark=l.begin()-l.end();		//HATA(list, node based)
	fark=distance(l.begin(),l.end());	//7
	cout<<fark<<endl;

	return 0;
}
