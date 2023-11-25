#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
using namespace std;

int main(){

	//move_iterator
	//input iterator

	vector<string> v1;
	vector<string> v2{"Sinop","Samsun","İstanbul"};

	back_insert_iterator<vector<string>> itr(v1);

	//copy(v2.begin(),v2.end(),itr);
	copy(move_iterator(v2.begin()),move_iterator(v2.end()),itr);

	cout<<"v1: ";
	for(string i: v1)
		cout<<i<<" ";
	cout<<"\n";

	cout<<"v2: ";
	for(string i: v2)
		cout<<i<<" ";
	cout<<"\n";

	return 0;
}
