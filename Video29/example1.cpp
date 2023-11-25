#include<iostream>
#include<stack>
using namespace std;

int main(){
	
	stack<int> s;
	
	cout<<s.size()<<endl;
	
	s.push(33);		//33
	cout<<s.top()<<endl;	//33

	s.push(11);		//11,33
	cout<<s.top()<<endl;	//11

	s.push(22);		//22,11,33
	cout<<s.top()<<endl;	//22

	cout<<s.size()<<endl;

	cout<<s.top()<<endl;	//22
	s.pop();		//22 silindi	11,33 kaldı

	cout<<s.top()<<endl;	//11
	s.pop();		//11 silindi	33 kaldı
	
	cout<<s.top()<<endl;	//33
	s.pop();		//33 silindi	boş
		
	return 0;
}
