#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
using namespace std;

int main(){

	//inserter()
	//insert_iterator oluşturur

	list<int> l1{11,22,33,44,55};
	list<int> l2{111,222,333,444,555};

	list<int>::iterator itr=l1.begin();
	advance(itr,2);

	//insert_iterator<list<int>> insert_itr(l1,itr);
	//copy(l2.begin(),l2.end(),insert_itr);
	copy(l2.begin(),l2.end(),inserter(l1,itr));

	for(int i:l1)cout<<i<<endl;

	return 0;
}

