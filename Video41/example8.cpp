#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    
	//inner_product

	vector<int> v1{10,20,30};
	vector<int> v2{1,2,3};
	int deger=40;	

	int carpTopla=inner_product(v1.begin(),v1.end(),v2.begin(),deger); 
	//40+(10*1)+(20*2)+(30*3) = 180

	int bolCikar=inner_product(v1.begin(),v1.end(),v2.begin(),deger,minus<int>(),divides<int>());
	//40-(10/1)-(20/2)-(30/3) = 10

	int islem=inner_product(v1.begin(),v1.end(),v2.begin(),deger,
	[](int x,int y){return x+y+1;},
	[](int x,int y){return x-y-1;});
	//40 + (10-1-1) +1 + (20-2-1) +1 + (30-3-1) +1 =94

	
	cout<<"carpTopla	: "<<carpTopla<<endl;
	cout<<"bolCikar 	: "<<bolCikar<<endl;
	cout<<"islem 		: "<<islem<<endl;
        
	return 0;
}
