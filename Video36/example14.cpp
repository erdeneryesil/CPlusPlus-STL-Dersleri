#include <iostream>
#include <algorithm>
#include<list>
using namespace std;

int main(){

	//mismatch

	vector<int> v{10,20,30,  60,90,  40,50,60};
	list<int>   l{10,20,30,  35,36,  40,50,60};

	pair<vector<int>::iterator, list<int>::iterator> farkCifti;

	farkCifti=mismatch(v.begin(),v.end(),l.begin());
	cout<<*farkCifti.first<<"-"<<*farkCifti.second<<endl;		//60-35

	
	farkCifti.first++;
	farkCifti.second++;
	farkCifti=mismatch(farkCifti.first,v.end(),farkCifti.second);
	cout<<*farkCifti.first<<"-"<<*farkCifti.second<<endl;		//90-36

	
	farkCifti.first++;
	farkCifti.second++;
	farkCifti=mismatch(farkCifti.first,v.end(),farkCifti.second);
	cout<<*farkCifti.first<<"-"<<*farkCifti.second<<endl;		//v.end()-l.end()

	//#include<execution>
	//farkCifti=mismatch(execution::par,farkCifti.first,v.end(),farkCifti.second);
	
	return 0;
}
