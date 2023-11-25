#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//equal_range
	
	vector<int> v{2,1,1,3,3,4,4,2,1,2,2,3,4,2,1};
	auto buyukMu=[](int x,int y){return x>y;};
	sort(v.begin(),v.end(),buyukMu);//4,4,4,3,3,3,2,2,2,2,2,1,1,1,1 

	pair<vector<int>::iterator,vector<int>::iterator> sinirlar;

	sinirlar=equal_range(v.begin(),v.end(),2,buyukMu);
	//sinirlar=equal_range(v.begin(),v.end(),9,buyukMu); //v.begin() iteratör çifti döner
	//sinirlar=equal_range(v.begin(),v.end(),-1,buyukMu); //v.end() iteratör çifti döner

	cout<<"alt sınır : "<<sinirlar.first-v.begin()<<" indisli eleman, "<<*sinirlar.first<<endl;
	cout<<"üst sınır : "<<sinirlar.second-v.begin()<<" indisli eleman, "<<*sinirlar.second<<endl;

	return 0;
}
