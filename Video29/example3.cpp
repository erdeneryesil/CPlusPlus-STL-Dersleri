#include<iostream>
#include<stack>
using namespace std;

int main(){
	
	stack<int> s;
	s.emplace(33);		//33
	s.emplace(11);		//11,33
	s.emplace(22);		//22,11,33
	s.emplace(44);		//44,22,11,33

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();	
	}

		
	return 0;
}
