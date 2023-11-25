#include<iostream>
#include<chrono>
#include<random>

using namespace std;
int main(){
	
	unsigned tohum=chrono::system_clock::now().time_since_epoch().count();
	default_random_engine uretec(tohum);
	uniform_int_distribution<int> dagilim(1,10);
	
	int rastgele1=dagilim(uretec);
	int rastgele2=dagilim(uretec);
	
	cout<<"rastgele1 	: "<<rastgele1<<endl;
	cout<<"rastgele2 	: "<<rastgele2<<endl;
			
	return 0;
}
