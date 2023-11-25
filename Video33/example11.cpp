#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
using namespace std;

int main(){

	//front_inserter()
	//front_insert_iterator oluşturur

	list<int> l1{11,22,33,44,55};
	list<int> l2{111,222,333,444,555};

	//front_insert_iterator<list<int>> itr(l1);
	//copy(l2.begin(),l2.end(),itr);
	copy(l2.begin(),l2.end(),front_inserter(l1));
	
	for(int i:l1)cout<<i<<endl;

	return 0;
}
