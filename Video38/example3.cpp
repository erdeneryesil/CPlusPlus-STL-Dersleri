#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//remove

	//vector<int> v{99,1,2};	//1,2, 2 	(son eleman tekrar ediyor)
	//vector<int> v{99,99,1,2};	//1,2, 1,2	(son 2 eleman tekrar ediyor)
	//vector<int> v{99,99,99,1,2};	//1,2, 99,1,2	(son 3 eleman tekrar ediyor)
	
	//vector<int> v{1,2,99};	//1,2, 99
	//vector<int> v{1,2,99,99};	//1,2, 99,99
	//vector<int> v{1,2,99,99,99};	//1,2, 99,99,99

	//vector<int> v{1,99,2};	//1,2, 2
	//vector<int> v{1,99,99,2};	//1,2, 99,2
	//vector<int> v{1,99,99,99,2};	//1,2, 99,99,2

	auto yeniEnd=remove(v.begin(),v.end(),99);	  		
	
	cout<<"gercek v 	: ";for(int i:v)cout<<i<<", ";cout<<"\n";

	cout<<"temizlenmiş v 	: ";for(auto i=v.begin();i!=yeniEnd;i++){cout<<*i<<", ";}cout<<"\n";

	//#include<execution>
	//auto yeniEnd=remove(execution::par,v.begin(),v.end(),99);

	return 0;
}
