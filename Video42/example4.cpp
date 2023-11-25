#include <iostream>
#include <memory>

using namespace std;

int main(){

	//uninitialized_fill_n

	pair<string*,ptrdiff_t>bellek=get_temporary_buffer<string>(5);
	
	if(bellek.second>0){
		auto itr=uninitialized_fill_n(bellek.first,bellek.second,"Sinop");
		cout<<"son eleman 	: "<<*(--itr)<<endl;
	}
	
	cout<<"bellek 		: ";
	for(int i=0;i<bellek.second;i++)cout<<*(bellek.first+i)<<", ";cout<<"\n";

	//#include<execution>
	//uninitialized_fill_n(execution::par,bellek.first,bellek.second,"Sinop");
    
	return 0;
}
