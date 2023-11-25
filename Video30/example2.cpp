#include<iostream>
#include<queue>
using namespace std;

int main(){

	queue<char> q;
	q.emplace('c');		//c
	q.emplace('a');		//c,a
	q.emplace('b');		//c,a,b
	q.emplace('a');		//c,a,b,a

	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}

	return 0;
}
