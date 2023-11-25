#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    	//sort_heap

    	vector<int> v{22,44,11,33};
   
    	make_heap(v.begin(),v.end()); 
    	//44,... (ilk eleman dışında sıralama yok)
	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
    	sort_heap(v.begin(),v.end()); 
    	//11,22,33,44 (küçükten büyüğe sıralı)
	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";

	/*
	auto buyukMu=[](int x,int y){return x>y;};
	make_heap(v.begin(),v.end(),buyukMu); 
	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
    	sort_heap(v.begin(),v.end(),buyukMu);
    	//44,33,22,11 (büyükten küçüğe sıralı)
	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
	*/

	return 0;
}
