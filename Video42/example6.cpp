#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main(){

	//uninitialized_move_n c++17

	pair<string*,ptrdiff_t>bellek=get_temporary_buffer<string>(5);

	vector<string> v{"bir","iki","üç","dört","beş"};
	if(bellek.second>0){

		auto p=uninitialized_move_n(v.begin(),bellek.second,bellek.first);
		
		cout<<"v son eleman 		: "<<*(--p.first)<<endl;
		cout<<"bellek son eleman	: "<<*(--p.second)<<endl;
	}
	
	cout<<"bellek 			: ";
	for(int i=0;i<bellek.second;i++)cout<<*(bellek.first+i)<<", ";cout<<"\n";

	cout<<"v	 		: ";
	for(string&i:v)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//auto p=uninitialized_move_n(execution::par,v.begin(),bellek.second,bellek.first);
    
	return 0;
}
