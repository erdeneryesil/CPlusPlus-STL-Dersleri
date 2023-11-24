#include<iostream>
#include<variant>
//using namespace std;

int main(){
	
	std::variant<int,double,char> v=33;
	std::get<0>(v)=44; 	//aktif tip index=0(int), değişmedi	
	//std::get<2>(v)='Y'; 	//HATA, aktif tip index=0(int)
	
	std::cout<<v.index()<<" ";
	std::cout<<std::get<0>(v)<<std::endl;

	return 0;
}
