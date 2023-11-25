#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//stable_sort

	vector<double> v1{2.55,1.55,2.44,3.77,1.66,3.66,1.44};
	vector<double> v2{2.55,1.55,2.44,3.77,1.66,3.66,1.44};//v1 ve v2 aynı
	
	stable_sort(v1.begin(),v1.end());
	//sayıları değerlerine göre sıralar
	
	stable_sort(v2.begin(),v2.end(),[](double x,double y){return (int)x<(int)y;});	
	//tamsayı kısımları aynı olan elemanların sıralarken v2 içerisindeki sıralamasını korur	

	cout<<"v1 	 : ";for(double i:v1)cout<<i<<", ";cout<<"\n";

	cout<<"v2 	 : ";for(double i:v2)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//stable_sort(execution::par,v2.begin(),v2.end(),[](double x,double y){return (int)x<(int)y;});	

	return 0;
}
