#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//partition_copy c++11

	vector<int> v{-2,1,-3,2,-1,3};
	vector<int>vPozitif(v.size());
	vector<int>vNegatif(v.size());

	pair<vector<int>::iterator,vector<int>::iterator> sinirlar;
	sinirlar= partition_copy(v.begin(),v.end(),vPozitif.begin(),vNegatif.begin(),
					[](int x){return x>0;});
	
	vPozitif.resize(distance(vPozitif.begin(),sinirlar.first));
	vNegatif.resize(distance(vNegatif.begin(),sinirlar.second));

	cout<<"v 	 : ";for(int i:v)cout<<i<<", ";cout<<"\n";

	cout<<"vPozitif : ";for(int i:vPozitif)cout<<i<<", ";cout<<"\n";
	cout<<"vPozitif son eleman : "<<*(--sinirlar.first)<<endl;

	cout<<"vNegatif : ";for(int i:vNegatif)cout<<i<<", ";cout<<"\n";
	cout<<"vNegatif son eleman : "<<*(--sinirlar.second)<<endl;

	//#include<execution>
	//sinirlar= partition_copy(execution::par,v.begin(),v.end(),vPozitif.begin(),vNegatif.begin(),
	//					[](int x){return x>0;});

	return 0;
}
