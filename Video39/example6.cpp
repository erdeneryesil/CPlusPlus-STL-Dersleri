#include<iostream>
#include<algorithm>
using namespace std;

class Sinif{
	public:
		bool operator()(int x,int y){return x>y;}
}Nesne;

bool fonksiyon(int x,int y){
	return x>y;
}

int main(){

	//sort

	vector<int> v{22,55,11,44,33,77,66};
	
	sort(v.begin(),v.end());	//varsayılan karşılaştırma operatörü <
	//sort(v.begin()+1,v.end()-1);	//22, 11, 33, 44, 55, 77, 66
	//sort(v.begin(),v.end(),[](int x,int y){return x>y;});//lambda ifadesi ile
	//sort(v.begin(),v.end(),Nesne); //sınıf ile
	//sort(v.begin(),v.end(),fonksiyon);//fonksiyon ile
	
	cout<<"v 	 : ";for(int i:v)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//sort(execution::par,v.begin(),v.end());

	return 0;
}
