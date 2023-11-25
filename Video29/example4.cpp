#include<iostream>
#include<stack>
using namespace std;

int main(){
	
	stack<char> s1;
	s1.push('a');
	s1.push('e');
	s1.push('i');
	s1.push('o');

	stack<char> s2;
	s2.push('b');
	s2.push('c');
	s2.push('d');
	s2.push('z');

	s1.swap(s2);

	cout<<"s1:";
	while(!s1.empty()){
		cout<<s1.top()<<" ";
		s1.pop();
	}
	
	cout<<"\ns2:";
	while(!s2.empty()){
		cout<<s2.top()<<" ";
		s2.pop();
	}
	cout<<"\n";

		
	return 0;
}
