#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//partial_sort_copy

	vector<int> v1{6,2,7,5,3,1,4,8};
	vector<int> v2(4);	//kısmi olarak sıralanacak elemanların sayısı 4

	auto itr=partial_sort_copy(v1.begin(),v1.end(),v2.begin(),v2.end()); //varsayılan < 
	//auto itr=partial_sort_copy(v1.begin(),v1.end(),v2.begin(),v2.end(),[](int x,int y){return x>y;});
	
	cout<<"v1 	 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 	 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";
	cout<<"v2 son eleman : "<<*(--itr)<<endl;

	//#include<execution>
	//auto itr=partial_sort_copy(execution::par,v1.begin(),v1.end(),v2.begin(),v2.end());

	return 0;
}
