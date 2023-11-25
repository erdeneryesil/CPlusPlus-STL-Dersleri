#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<int> ms{11,22,22,22,44,44,44,55};

	int c=ms.count(55);
	cout<<c<<endl;

	c=ms.count(44);
	cout<<c<<endl;


	c=ms.count(33);
	cout<<c<<endl;
	
	return 0;
}
