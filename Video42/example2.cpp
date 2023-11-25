#include <iostream>
#include <vector>
#include <memory>
using namespace std;

int main(){

	//uninitialized_copy_n c++11

	pair<string*,ptrdiff_t>bellek=get_temporary_buffer<string>(5);
	
	if(bellek.second>0){
		vector<string> v{"bir","iki","üç","dört","beş"};
		auto itr=uninitialized_copy_n(v.begin(),bellek.second,bellek.first);

		cout<<"son eleman 	: "<<*(--itr)<<endl;
	}
	
	cout<<"bellek 		: ";
	for(int i=0;i<bellek.second;i++)cout<<*(bellek.first+i)<<", ";cout<<"\n";

	//#include<execution>
	//auto sonElemanItr=uninitialized_copy_n(execution::par,v.begin(),bellek.second,bellek.first);
    
	return 0;
}
