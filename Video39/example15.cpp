#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//equal_range
	
	vector<int> v{2,1,1,3,3,4,4,2,1,2,2,3,4,2,1};
	
	sort(v.begin(),v.end());//1,1,1,1,2,2,2,2,2,3,3,3,4,4,4 

	pair<vector<int>::iterator,vector<int>::iterator> sinirlar;

	sinirlar=equal_range(v.begin(),v.end(),2);
	//sinirlar=equal_range(v.begin(),v.end(),9); //v.end() iteratör çifti döner
	//sinirlar=equal_range(v.begin(),v.end(),-1); //v.begin() iteratör çifti döner

	cout<<"alt sınır : "<<sinirlar.first-v.begin()<<" indisli eleman, "<<*sinirlar.first<<endl;
	cout<<"üst sınır : "<<sinirlar.second-v.begin()<<" indisli eleman, "<<*sinirlar.second<<endl;

	return 0;
}
