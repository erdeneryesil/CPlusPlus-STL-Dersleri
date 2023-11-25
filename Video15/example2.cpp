#include<iostream>
#include<deque>

int main(){
	
	std::deque<int>deq{99,44,77,22};
	std::cout<<deq.size()<<std::endl;
	std::cout<<deq.max_size()<<std::endl;
	
	deq.resize(20);
	std::cout<<deq.size()<<std::endl;

	for(int i:deq){
		std::cout<<i<<std::endl;
	}
	
	return 0;
}
