#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//replace

	vector<int> v1{10,20,30,40,50,20,10,10};


	replace(v1.begin(),v1.end()-1,10,99); //sondaki 10 değişmeyecek

	cout<<"v1 : ";for(int i:v1)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//replace(execution::par,v1.begin(),v1.end()-1,10,99); 

	return 0;
}
