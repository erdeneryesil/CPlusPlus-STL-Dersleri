#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<int> ms{11,22,22,22,44,44,44,55};

	ms.erase(ms.lower_bound(22),ms.upper_bound(22));
	
	for(int i:ms)cout<<i<<",";
	cout<<"\n";
	
	return 0;
}
