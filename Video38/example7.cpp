#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//unique

	//vector<int> v{1,1,2,3};	//1,2,3, 3 (son eleman tekrar ediyor)
	//vector<int> v{1,1,1,2,3};	//1,2,3, 2,3 (son 2 eleman tekrar ediyor)
	//vector<int> v{1,1,1,2,1,1,1,3}; //1,2,1,3, 1,1,1,3 (son 4 eleman tekrar ediyor)
	
	vector<int> v{1,1,1,2,3,3,3,2,2,2,1,1,1};
	//1,2,3,2,1, 3,3,2,2,2,1,1,1(son 8 eleman takrar ediyor)

	auto yeniEnd=unique(v.begin(),v.end());
	
	cout<<"gerçek v 	: ";for(int i:v)cout<<i<<", ";cout<<"\n";

	cout<<"temizlenmiş v 	: ";for(auto i=v.begin();i!=yeniEnd;i++){cout<<*i<<", ";}cout<<"\n";

	//#include<execution>
	//auto yeniEnd=unique(execution::par,v.begin(),v.end());

	return 0;
}
