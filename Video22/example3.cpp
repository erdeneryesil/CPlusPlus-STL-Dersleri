#include<iostream>
#include<map>
using namespace std;

int main(){

	multimap<int, char>m{{1,'c'},{1,'a'},{1,'z'},{1,'b'}};	//key aynı iken eklenme sırasına göre diziliyor value
	//{1,'c'},{1,'a'},{1,'z'},{1,'b'}

	for(auto i:m)cout<<i.first<<"-"<<i.second<<", ";
	cout<<endl;
	
	return 0;
}
