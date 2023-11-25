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
	//execution::seq, execution::par
		
	vector<int> v(99999999);

	unsigned tohum=system_clock::now().time_since_epoch().count();
	default_random_engine uretec(tohum);
	uniform_int_distribution<int> dagilim(0,1000);
	auto rastgeleSayi ([=]()mutable{return dagilim(uretec);});
	
    	steady_clock::time_point baslamaAni=steady_clock::now();
      	  	
	generate(begin(v), end(v), rastgeleSayi);
	//generate(execution::seq,begin(v), end(v), rastgeleSayi);
	//generate(execution::par,begin(v), end(v), rastgeleSayi);

    	steady_clock::time_point bitisAni=steady_clock::now();
    	duration<double> sure=duration_cast<duration<double>>(bitisAni-baslamaAni);
    	cout<<sure.count()<<"sn sürdü"<<endl;
    		
  	return 0;
}
