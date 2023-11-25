#include<iostream>
#include<deque>

int main(){
	
	std::deque<std::string>deq{"Selam","Merhaba","Naber?","Nasılsın?"};
	
	std::deque<double>deq1;
	std::deque<double>deq2{99.88};

	std::cout<<deq1.empty()<<std::endl;
	std::cout<<deq2.empty()<<std::endl;
	
	return 0;
}
