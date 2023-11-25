#include<iostream>
#include<execution>

using namespace std;

int main(){
    
	vector<int>v{22,55,11,66,44,33};
    
    	find(v.begin(),v.end(),99);
    	//find(execution::seq,v.begin(),v.end(),99);
    	//find(execution::par,v.begin(),v.end(),99);
    	//find(execution::unseq,v.begin(),v.end(),99);
    	//find(execution::par_unseq,v.begin(),v.end(),99);
   
	return 0;
}
