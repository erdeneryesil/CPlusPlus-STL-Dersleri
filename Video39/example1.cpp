#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    	//partition

	vector<int> v{-2,1,-3,2,-1,3};

	auto sinir=partition(v.begin(),v.end(),[](int x){return x>0;});
	//sıralamaya bağlı kalınmaz
	
	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";
	
	cout<<"ilk bölüm bitiş sınırı : "<<*sinir<<endl;

	//#include<execution>
	//auto sinir=partition(execution::par,v.begin(),v.end(),[](int x){return x>0;});

	return 0;
}
