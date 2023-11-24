#include<iostream>
#include<any>
//using namespace std;

int main(){
		
	std::any a;		
	a=22;			//int
	a=33.44;		//double
	a.emplace<char>('S');	//char
	
	a.reset();
	//a={};
	//a=std::any{};

	return 0;
}
