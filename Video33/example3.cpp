#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
using namespace std;

int main(){

	//front_insert_iterator
	//output iterator 
	//push_front() fonksiyonuna sahip container nesneleri tarafından kullanılabilirler. Örn: deque,list...

	list<int> l1{11,22,33,44,55};
	list<int> l2{111,222,333,444,555};

	front_insert_iterator<list<int>> itr(l1);

	copy(l2.begin(),l2.end(),itr);
	
	for(int i:l1)cout<<i<<endl;

	return 0;
}
