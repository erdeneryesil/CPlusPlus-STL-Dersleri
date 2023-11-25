#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//merge
	
	vector<int> v1{22,1,3,4,11};
	vector<int> v2{33,11,2,44,1};
	vector<int> v3(10);
	vector<int> v4(10);

	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	auto itr=merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

	cout<<"v3 	 : ";for(int i:v3)cout<<i<<", ";cout<<"\n";
	cout<<"v3 son kopyalanan eleman : "<<*(--itr)<<endl;

	auto buyukMu=[](int x,int y){return x>y;};
	sort(v1.begin(),v1.end(),buyukMu);
	sort(v2.begin(),v2.end(),buyukMu);
	itr=merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v4.begin(),buyukMu);
	
	cout<<"v4 	 : ";for(int i:v4)cout<<i<<", ";cout<<"\n";
	cout<<"v4 son kopyalanan eleman : "<<*(--itr)<<endl;

	//#include<execution>
	//itr=merge(execution::par,v1.begin(),v1.end(),v2.begin(),v2.end(),v4.begin(),buyukMu);

	return 0;
}
