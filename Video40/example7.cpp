#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    	//push_heap

    	vector<int> v{22,44,11,33};
   
    	make_heap(v.begin(),v.end()); 

    	v.push_back(55);    //44, ... , 55 (yeniden düzenlenmesi gerekir)  
	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
  
    	push_heap(v.begin(),v.end());//55, ...
	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";

	/*
	auto buyukMu=[](int x,int y){return x>y;};
	make_heap(v.begin(),v.end(),buyukMu);
	v.push_back(1);    //11, ... , 1 (yeniden düzenlenmesi gerekir)  
	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
	push_heap(v.begin(),v.end(),buyukMu);//1, ...
	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
	*/

	return 0;
}
