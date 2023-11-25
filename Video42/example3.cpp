#include <iostream>
#include <memory>

using namespace std;

int main(){


	//uninitialized_fill

	pair<string*,ptrdiff_t>bellek=get_temporary_buffer<string>(5);
	
	if(bellek.second>0){
		uninitialized_fill(bellek.first,bellek.first+bellek.second,"Sinop");
	}
	
	cout<<"bellek 		: ";
	for(int i=0;i<bellek.second;i++)cout<<*(bellek.first+i)<<", ";cout<<"\n";

	//#include<execution>
	//uninitialized_fill(execution::par,bellek.first,bellek.first+bellek.second,"Sinop");
    
	return 0;
}
