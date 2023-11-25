#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main(){

	//uninitialized_move c++17

	pair<string*,ptrdiff_t>bellek=get_temporary_buffer<string>(5);
	
	vector<string> v{"bir","iki","üç","dört","beş"};
	if(bellek.second>0){
		auto itr=uninitialized_move(v.begin(),v.end(),bellek.first);
		cout<<"son eleman 	: "<<*(--itr)<<endl;	
	}
	
	cout<<"bellek 		: ";
	for(int i=0;i<bellek.second;i++)cout<<*(bellek.first+i)<<", ";cout<<"\n";

	cout<<"v	 	: ";
	for(string&i:v)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//auto sonElemanItr=uninitialized_move(execution::par,v.begin(),v.end(),bellek.first);

	return 0;
}
