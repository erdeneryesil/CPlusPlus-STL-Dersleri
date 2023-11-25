#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//make_heap

    	vector<int> v{22,44,11,44,33,11};
    
    	cout<<"v(vector)    : ";for(int i:v)cout<<i<<", ";cout<<"\n";

    	make_heap(v.begin(),v.end());
    	//44, ... (ilk 44 dışındaki hiçbir elemanın sıralaması ile ilgilenilmez)

    	//make_heap(v.begin(),v.end(),[](int x,int y){return x>y;});//en küçük 
    	//11, ... (ilk 11 dışındaki hiçbir elemanın sıralaması ile ilgilenilmez)

	cout<<"v(heap)      : ";for(int i:v)cout<<i<<", ";cout<<"\n";

    	cout<<v.front()<<endl;  //en büyük ya da en küçük eleman

	return 0;
}
