#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    	//is_heap_until c++11

    	vector<int> v1{44,33,11,99,22};
    
    	cout<<is_heap(v1.begin(),v1.end())<<endl; //false
    	auto itr=is_heap_until(v1.begin(),v1.end());  //99
    	cout<<*itr<<endl;

	cout<<"v1 heap kısım : ";for(auto i=v1.begin();i!=itr;i++)cout<<*i<<", ";cout<<"\n";


	vector<int> v2{11,22,44,1,33};
	auto buyukMu=[](int x,int y){return x>y;};

	cout<<is_heap(v2.begin(),v2.end(),buyukMu)<<endl; //false
    	itr=is_heap_until(v2.begin(),v2.end(),buyukMu);  //1
    	cout<<*itr<<endl;

	cout<<"v2 heap kısım : ";for(auto i=v2.begin();i!=itr;i++)cout<<*i<<", ";cout<<"\n";


	//#include<execution>
	//itr=is_heap_until(execution::par,v1.begin(),v1.end());

	return 0;
}

