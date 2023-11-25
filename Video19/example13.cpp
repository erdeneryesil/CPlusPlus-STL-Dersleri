#include<iostream>
#include<set>
using namespace std;

int main(){

	set<int> s{44,11,33,44,55,44,22};	//11,22,33,44,55

	int c=s.count(44);
	cout<<c<<endl;

	c=s.count(22);
	cout<<c<<endl;

	c=s.count(99);
	cout<<c<<endl;
	
	return 0;
}
