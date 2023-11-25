#include<iostream>
#include<deque>

int main(){
	
	std::deque<char>deq1{'a','e','u'};
	std::deque<char>deq2{'b','c','d'};

	for(int i=0;i<deq1.size();i++){
		std::cout<<deq1[i]<<"-"<<deq2[i]<<std::endl;
	}

	deq1.swap(deq2);
	
	std::cout<<"---"<<std::endl;
	for(int i=0;i<deq1.size();i++){
		std::cout<<deq1[i]<<"-"<<deq2[i]<<std::endl;
	}
	
	return 0;
}
