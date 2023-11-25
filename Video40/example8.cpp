#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    	//pop_heap

    	vector<int> v{22,44,11,33};
    
    	make_heap(v.begin(),v.end()); 
    	//44,...

    	pop_heap(v.begin(),v.end());  
    	//...,44  (silinmedi,sona taşındı.)
	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
  
    	v.pop_back();  
     	//33,...
	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";

	/*
	auto buyukMu=[](int x,int y){return x>y;};
	make_heap(v.begin(),v.end(),buyukMu); 
    	//11,...
    	pop_heap(v.begin(),v.end(),buyukMu);  
    	//...,11  (silinmedi,sona taşındı.)
	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
    	v.pop_back();  
     	//22,...
	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
	*/

	return 0;
}
