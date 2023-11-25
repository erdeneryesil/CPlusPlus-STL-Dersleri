#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

	unordered_map<int,int>m{{1,11},{2,22},{3,33},{4,44},{11,111}};
	
	cout<<m.size()<<endl;
	cout<<m.max_size()<<endl;
	cout<<m.empty()<<endl;
	m.clear();
	cout<<m.empty()<<endl;
	
	return 0;
}
