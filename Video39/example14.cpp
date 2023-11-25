#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//lower_bound, upper_bound
	
	vector<int> v{2,1,1,3,3,4,4,2,1,2,2,3,4,2,1};
	auto buyukMu=[](int x,int y){return x>y;};
	sort(v.begin(),v.end(),buyukMu);//4,4,4,3,3,3,2,2,2,2,2,1,1,1,1 
	
	vector<int>::iterator altSinir,ustSinir;

	altSinir=lower_bound(v.begin(),v.end(),2,buyukMu);
	ustSinir=upper_bound(v.begin(),v.end(),2,buyukMu);

	//altSinir=lower_bound(v.begin(),v.end(),9,buyukMu); //v.begin() iteratörü döner
	//ustSinir=upper_bound(v.begin(),v.end(),9,buyukMu); //v.begin() iteratörü döner

	//altSinir=lower_bound(v.begin(),v.end(),-1,buyukMu); //v.end() iteratörü döner
	//ustSinir=upper_bound(v.begin(),v.end(),-1,buyukMu); //v.end() iteratörü döner

	cout<<"alt sınır : "<<altSinir-v.begin()<<" indisli eleman, "<<*altSinir<<endl;
	cout<<"üst sınır : "<<ustSinir-v.begin()<<" indisli eleman, "<<*ustSinir<<endl;

	return 0;
}
