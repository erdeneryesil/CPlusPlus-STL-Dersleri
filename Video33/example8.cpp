#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
using namespace std;

int main(){

	//ostream_iterator
	//output iterator

	vector<double> v{11.22,33.44,55.66};

	ostream_iterator<double> itr(cout,"; ");

	copy(v.begin(),v.end(),itr);

	return 0;
}
