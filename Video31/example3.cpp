#include<iostream>
#include<queue>
using namespace std;

int main(){

	//priority_queue<int,vector<int>,greater<int>> pq1;
	//priority_queue<int,vector<int>,less<int>> pq2;

	priority_queue<int,vector<int>,greater<int>> pq1;
	priority_queue<int,vector<int>,greater<int>> pq2;

	pq1.push(22);
	pq1.push(44);
	pq1.push(22);
	pq1.push(66);

	pq2.push(11);
	pq2.push(55);
	pq2.push(33);

	pq1.swap(pq2);

	cout<<"pq1: ";
	while(!pq1.empty()){
		cout<<pq1.top()<<" ";
		pq1.pop();	
	}
	
	cout<<"\npq2: ";
	while(!pq2.empty()){
		cout<<pq2.top()<<" ";
		pq2.pop();	
	}
	cout<<"\n";

	return 0;
}
