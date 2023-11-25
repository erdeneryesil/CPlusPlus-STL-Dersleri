#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//binary_search
	
	vector<int> v{2,1,1,3,3,4,4,2,1,2,2,3,4,2,1};
	
	sort(v.begin(),v.end());//1,1,1,1,2,2,2,2,2,3,3,3,4,4,4
	cout<<binary_search(v.begin(),v.end(),4)<<endl;
	cout<<binary_search(v.begin(),v.end(),9)<<endl;
	
	auto buyukMu=[](int x,int y){return x>y;};
	sort(v.begin(),v.end(),buyukMu);//4,4,4,3,3,3,2,2,2,2,2,1,1,1,1,
	cout<<binary_search(v.begin(),v.end(),4,buyukMu)<<endl;
	cout<<binary_search(v.begin(),v.end(),9,buyukMu)<<endl;

	return 0;
}
