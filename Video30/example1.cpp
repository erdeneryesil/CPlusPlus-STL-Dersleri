#include<iostream>
#include<queue>
using namespace std;

int main(){

	queue<int> q;
	
	cout<<q.size()<<endl;

	q.push(55);	//55
	q.push(11);	//55,11
	q.push(33);	//55,11,33
	q.push(44);	//55,11,33,44

	cout<<q.size()<<endl;

	cout<<q.front()<<endl;		//55
	cout<<q.back()<<endl;		//44

	q.pop();			//11,33,44
	cout<<q.front()<<endl;		//11
	cout<<q.back()<<endl;		//44

	q.pop();			//33,44
	cout<<q.front()<<endl;		//33
	cout<<q.back()<<endl;		//44

	return 0;
}
