#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//fill_n

	vector<int> v(10);  		//0,0,0,0,0,0,0,0,0,0
	
	auto itr=fill_n(v.begin(),5,11); //11,11,11,11,11,0,0,0,0,0,
	cout<<"son eklenen eleman : "<<*(--itr)<<endl;	

	itr=fill_n(v.begin()+2,8,99);	//11,11,99,99,99,99,99,99,99,99
	cout<<"son eklenen eleman : "<<*(--itr)<<endl;

	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//itr=fill_n(execution::par,v.begin()+2,8,99);

	return 0;
}
