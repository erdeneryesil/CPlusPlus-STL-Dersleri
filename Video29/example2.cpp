#include<iostream>
#include<stack>
using namespace std;

int main(){
	
	stack<string> s;
	s.push("Sinop");
	s.push("Samsun");
	s.push("Sinop");
	s.push("İstanbul");

	while(!s.empty()){
	 	cout<<s.top()<<endl;
		s.pop();	
	}

		
	return 0;
}
