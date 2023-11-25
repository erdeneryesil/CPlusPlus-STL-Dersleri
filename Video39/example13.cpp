#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//lower_bound, upper_bound
	
	vector<int> v{2,1,1,3,3,4,4,2,1,2,2,3,4,2,1};
	
	sort(v.begin(),v.end());//1,1,1,1,2,2,2,2,2,3,3,3,4,4,4 
		
	vector<int>::iterator altSinir,ustSinir;

	altSinir=lower_bound(v.begin(),v.end(),2);
	ustSinir=upper_bound(v.begin(),v.end(),2);

	//altSinir=lower_bound(v.begin(),v.end(),9); //v.end() iteratörü döner
	//ustSinir=upper_bound(v.begin(),v.end(),9); //v.end() iteratörü döner

	//altSinir=lower_bound(v.begin(),v.end(),-1); //v.begin() iteratörü döner
	//ustSinir=upper_bound(v.begin(),v.end(),-1); //v.begin() iteratörü döner

	cout<<"alt sınır : "<<altSinir-v.begin()<<" indisli eleman, "<<*altSinir<<endl;
	cout<<"üst sınır : "<<ustSinir-v.begin()<<" indisli eleman, "<<*ustSinir<<endl;

	return 0;
}
