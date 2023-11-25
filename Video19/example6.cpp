#include<iostream>
#include<set>
using namespace std;

int main(){
	
	set<int> s{55,44,99,11,33,44,88,66,77,44,11,55,22};
	
	cout<<s.size()<<endl;
	cout<<s.max_size()<<endl;
	cout<<s.empty()<<endl;
	s.clear();
	cout<<s.empty()<<endl;
	
	return 0;
}
