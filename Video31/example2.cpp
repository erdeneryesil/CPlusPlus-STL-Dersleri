#include<iostream>
#include<queue>
using namespace std;

int main(){

	priority_queue<string,vector<string>,greater<string>> pq;		
	//priority_queue<string,vector<string>,less<string>> pq;		

	pq.emplace("Sinop");
	pq.emplace("Ankara");
	pq.emplace("Bursa");
	pq.emplace("Zonguldak");
	pq.emplace("Muğla");

	while(!pq.empty()){
		cout<<pq.top()<<endl;
		pq.pop();
	}

	return 0;
}
