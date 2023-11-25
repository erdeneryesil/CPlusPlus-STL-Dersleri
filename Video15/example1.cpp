#include<iostream>
#include<deque>

int main(){
	
	std::deque<int> deq1={22,11,33};
	std::deque<int> deq2{55,44,66};
	
	std::deque<int> deq;		//
	deq.push_back(22);		//22
	deq.push_back(55);		//22,55
	deq.push_front(99);		//99,22,55
	deq.push_front(77);		//77,99,22,55
	
	deq.insert(deq.begin(),11);	//11,77,99,22,55
	deq.insert(deq.begin()+3,33);	//11,77,99,33,22,55

	deq.emplace_back(44);		//11,77,99,33,22,55,44
	deq.emplace_front(66);		//66,11,77,99,33,22,55,44
	deq.emplace(deq.begin(),88);	//88,66,11,77,99,33,22,55,44
	deq.emplace(deq.begin()+2,333);	//88,66,333,11,77,99,33,22,55,44

	deq.pop_back();			//88,66,333,11,77,99,33,22,55
	deq.pop_front();		//66,333,11,77,99,33,22,55
	deq.erase(deq.begin());		//333,11,77,99,33,22,55
	deq.erase(deq.begin()+5);	//333,11,77,99,33,55
	deq.clear();			//
	
	return 0;
}
