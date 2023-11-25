#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<int> ms{55,44,99,11,33,44,88,66,77,44,11,55,22};
	
	cout<<ms.size()<<endl;
	cout<<ms.max_size()<<endl;
	cout<<ms.empty()<<endl;
	ms.clear();
	cout<<ms.empty()<<endl;
	
	return 0;
}

