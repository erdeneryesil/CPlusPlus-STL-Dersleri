#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
using namespace std;

int main(){

	//back_insert_iterator
	//output iterator 
	//push_back() fonksiyonuna sahip container nesneleri tarafından kullanılabilirler. Örn: vector,deque,list...

	vector<int> v1{11,22,33,44,55};
	vector<int>v2{111,222,333,444,555};

	back_insert_iterator<vector<int>> itr(v1);

	copy(v2.begin(),v2.end(),itr);
	
	for(int i:v1)cout<<i<<endl;

	return 0;
}
