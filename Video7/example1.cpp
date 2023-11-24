#include<iostream>
#include<variant>
//using namespace std;

int main(){
	
	std::variant<int,double,char> v1='X';	//aktif tip index=2(char)
	std::cout<<v1.index()<<std::endl;

	std::variant<int,double,char> v2{'X'};	//aktif tip index=2(char)
	std::cout<<v2.index()<<std::endl;

	std::variant<int,double,char> v3;      //aktif tip index=0(int)
	std::cout<<v3.index()<<std::endl;
	v3=11.22;			      //aktif tip index=1(double)
	std::cout<<v3.index()<<std::endl;
		
	return 0;
}
