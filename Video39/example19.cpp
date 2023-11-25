#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//inplace_merge
	
	vector<int> v1{22,1,3,4,11};
	vector<int> v2{33,11,2,44,1};
	vector<int> v3(10);
	vector<int> v4(10);

	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	
	auto itr=copy(v1.begin(),v1.end(),v3.begin());
	copy(v2.begin(),v2.end(),itr);
	//v1 ve v2; v3 içerisine kopyalanıyor
	//1,3,4,11,22,1,2,11,33,44

	inplace_merge(v3.begin(),itr,v3.end());
	//v3'ün kendi içerisinde birleştirme yapılarak sıralı hale getiriliyor
	//1,1,2,3,4,11,11,22,33,44,
	
	cout<<"v3 	 : ";for(int i:v3)cout<<i<<", ";cout<<"\n";

	auto buyukMu=[](int x,int y){return x>y;};
	sort(v1.begin(),v1.end(),buyukMu);
	sort(v2.begin(),v2.end(),buyukMu);

	itr=copy(v1.begin(),v1.end(),v4.begin());
	copy(v2.begin(),v2.end(),itr);
	//v1 ve v2; v4 içerisine kopyalanıyor
	//22,11,4,3,1,44,33,11,2,1

	inplace_merge(v4.begin(),itr,v4.end(),buyukMu);
	//v4'ün kendi içerisinde birleştirme yapılarak sıralı hale getiriliyor
	//44,33,22,11,11,4,3,2,1,1

	cout<<"v4 	 : ";for(int i:v4)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//inplace_merge(execution::par,v4.begin(),itr,v4.end(),buyukMu);

	return 0;
}
