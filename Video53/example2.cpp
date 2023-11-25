#include<iostream>
#include<vector>
#include<random>
#include<algorithm>
#include<chrono>
#include<execution>
using namespace std;
using namespace chrono;

int main ()
{
	//execution::unseq
	
	vector<int> v(199999999);
	iota(v.begin(),v.end(),1);//v={1,2,3,....,199999999}
	
	steady_clock::time_point baslamaAni=steady_clock::now();
	
	long toplam=0;
	//toplam=1+2+3+...+199999999
	
	for_each(v.begin(),v.end(),[&](int x){toplam+=x;});
	//for_each(execution::unseq,v.begin(),v.end(),[&](int x){toplam+=x;});
	
	steady_clock::time_point bitisAni=steady_clock::now();
    	duration<double> sure=duration_cast<duration<double>>(bitisAni-baslamaAni);
    	cout<<sure.count()<<"sn sürdü"<<endl;
        	
  	return 0;
}
