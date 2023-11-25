#include <iostream>
#include<chrono>

using namespace std;
using namespace chrono;

int main(){
	
	steady_clock::time_point baslama=steady_clock::now();
	
	for(int i=0;i<999999;i++)cout<<"merhaba";
	
	steady_clock::time_point bitis=steady_clock::now();
	
	duration<double> sure=duration_cast<duration<double>>(bitis-baslama);
	
	cout<<"\n";
	cout<<sure.count()<<"sn sürdü"<<endl;

	return 0;
}
