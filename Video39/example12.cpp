#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//nth_element

	vector<int> v1{88,55,11,44,99,77,22,66,33};	
	vector<int> v2{88,55,11,44,99,77,22,66,33};	//v1, v2 aynı sayılar
	
	nth_element(v1.begin(),v1.begin()+2,v1.end());	
//< sıralı haldeki 2 indisli elemana(33) göre; 33'ten küçükler solda, 33'ten büyükler sağda


	nth_element(v2.begin(),v2.begin()+6,v2.end(),[](int x,int y){return x>y;});	
//> sıralı haldeki 6 indisli elemana(33) göre; 33'ten büyükler solda, 3'ten küçükler sağda
	
	cout<<"v1 	 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 	 : ";for(int i:v2)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//nth_element(execution::par,v1.begin(),v1.begin()+2,v1.end());

	return 0;
}
