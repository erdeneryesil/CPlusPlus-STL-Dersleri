#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
using namespace std;

int main(){

	//make_move_iterator()
	//move_iterator oluşturur

	vector<string> v1;
	vector<string> v2{"Sinop","Samsun","İstanbul"};

	back_insert_iterator<vector<string>> itr(v1);

	copy(make_move_iterator(v2.begin()),make_move_iterator(v2.end()),itr);

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
