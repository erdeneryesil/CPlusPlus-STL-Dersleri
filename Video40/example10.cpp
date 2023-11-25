#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    	//is_heap c++11

    	vector<int> v{22,44,11,33};
    
    	cout<<is_heap(v.begin(),v.end())<<endl;
    	make_heap(v.begin(),v.end()); 
    	cout<<is_heap(v.begin(),v.end())<<endl;

	/*
	auto buyukMu=[](int x,int y){return x>y;};
	cout<<is_heap(v.begin(),v.end(),buyukMu)<<endl;	
    	make_heap(v.begin(),v.end(),buyukMu); 
    	cout<<is_heap(v.begin(),v.end(),buyukMu)<<endl;
	*/

	//#include<execution>
	//is_heap(execution::par,v.begin(),v.end())

	return 0;
}
