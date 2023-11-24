#include<iostream>
#include<variant>
//using namespace std;

int main(){
	
	//VARIANT İÇİNDEKİ VERİYİ DEĞİŞTİRME
	std::variant<int,double,char> v;//aktif tip index=0 (int)
	v='X';		//aktif tip index=2 (char)
	std::cout<<v.index()<<" ";
	std::cout<<std::get<2>(v)<<std::endl;

	v.emplace<1>(11.22);	//aktif tip index=1 (double)
	std::cout<<v.index()<<" ";
	std::cout<<std::get<1>(v)<<std::endl;

	v.emplace<0>(33);	//aktif tip index=0 (int)
	std::cout<<v.index()<<" ";
	std::cout<<std::get<0>(v)<<std::endl;

	return 0;
}
