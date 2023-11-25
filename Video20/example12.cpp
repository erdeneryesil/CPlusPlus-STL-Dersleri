#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<int> ms{11,22,22,22,44,44,44,55};
	
	pair<multiset<int>::iterator,multiset<int>::iterator> p=ms.equal_range(22);

	ms.erase(p.first,p.second);

	for(int i:ms)cout<<i<<",";
	cout<<"\n";
	
	return 0;
}
