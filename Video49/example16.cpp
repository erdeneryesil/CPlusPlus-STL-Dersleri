#include<iostream>
#include<iomanip>
#include<regex>
using namespace std;

int main(){
	
	//	{i,j}
	
	string metin[]={"1","10","100","1000","10000","100000","1000000","10000000"};
	regex reg("10{3,5}");	//1000,10000,100000
	
	for(string i:metin){
		cout<<setw(8)<<i<<setw(3)<<regex_match(i,reg)<<endl; 
	}
	
	return 0;
}
