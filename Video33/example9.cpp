#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
using namespace std;

int main(){

	//ostreambuf_iterator
	//output iterator

	string sehir ("Sinop\n");

  	ostreambuf_iterator<char> itr(cout); //itr(cout,"; ")ostream_iterator

  	copy ( sehir.begin(), sehir.end(), itr);

	return 0;
}
