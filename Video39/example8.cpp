#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//partial_sort

	vector<int> v{6,2,7,5,3,1,4,8};

	partial_sort(v.begin(),v.begin()+4,v.end()); //varsayılan <
	//partial_sort(v.begin(),v.begin()+4,v.end(),[](int x,int y){return x>y;});
	
	cout<<"v 	 : ";for(int i:v)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//partial_sort(execution::par,v.begin(),v.begin()+4,v.end());

	return 0;
}
