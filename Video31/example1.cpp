#include<iostream>
#include<queue>
using namespace std;

int main(){

	priority_queue<int> pq;
	
	cout<<pq.size()<<endl;

	pq.push(22);		//22
	pq.push(33);		//33,22
	pq.push(11);		//33,22,11
	pq.push(22);		//33,22,22,11
	pq.push(44);		//44,33,22,22,11

	cout<<pq.size()<<endl;

	cout<<pq.top()<<endl;		//44

	pq.pop();
	cout<<pq.top()<<endl;		//33

	pq.pop();
	cout<<pq.top()<<endl;		//22

	pq.pop();
	cout<<pq.top()<<endl;		//22

	pq.pop();
	cout<<pq.top()<<endl;		//11

	return 0;
}
