#include<iostream>
#include<queue>
using namespace std;

int main(){

	queue<int> q1;
	q1.push(44);
	q1.push(66);
	q1.push(22);
	q1.push(88);
	
	queue<int> q2;
	q2.push(33);
	q2.push(11);
	q2.push(55);
	q2.push(11);
	q2.push(11);

	q2.swap(q1);

	cout<<"q1: ";
	while(!q1.empty()){
		cout<<q1.front()<<" ";
		q1.pop();	
	}
	
	cout<<"\nq2: ";
	while(!q2.empty()){
		cout<<q2.front()<<" ";
		q2.pop();	
	}
	cout<<"\n";

	return 0;
}
