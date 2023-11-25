#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//partition_point c++11

	vector<int> v{-2,1,-3,2,-1,3};
	vector<int>vPozitif;
	vector<int>vNegatif;

	auto pozitifMi=[](int x){return x>0;};

	stable_partition(v.begin(),v.end(),pozitifMi); //v :1,2,3, -2,-3,-1
	//partition_point ile aynı şekilde iteratör döndürür
	
	auto sinir=partition_point(v.begin(),v.end(),pozitifMi); // -2 işaret edilir
	
	vPozitif.assign(v.begin(),sinir);	//	1,2,3
	vNegatif.assign(sinir,v.end());		//	-2,-3,-1

	cout<<"v 	 : ";for(int i:v)cout<<i<<", ";cout<<"\n";

	cout<<"vPozitif : ";for(int i:vPozitif)cout<<i<<", ";cout<<"\n";

	cout<<"vNegatif : ";for(int i:vNegatif)cout<<i<<", ";cout<<"\n";
		
	//execution::par,execution::seq,execution::par_unseq,execution::unseq desteklenmez

	return 0;
}
