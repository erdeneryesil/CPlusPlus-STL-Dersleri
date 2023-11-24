#include<iostream>
#include<any>
//using namespace std;

int main(){
		
	std::any a=11;
	std::cout<<a.type().name()<<std::endl;

	a=33.44;		//double
	std::cout<<a.type().name()<<std::endl;

	a.emplace<char>('S');	//char
	std::cout<<a.type().name()<<std::endl;

	return 0;
}
