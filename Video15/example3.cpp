#include<iostream>
#include<deque>

int main(){
	
	std::deque<std::string>deq{"Selam","Merhaba","Naber?","Nasılsın?"};
	
	std::cout<<deq[2]<<std::endl;
	std::cout<<deq.at(1)<<std::endl;
	std::cout<<deq.front()<<std::endl;
	std::cout<<deq.back()<<std::endl;
	
	return 0;
}
