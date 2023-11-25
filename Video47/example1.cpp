#include<iostream>
#include<chrono>
#include<random>

using namespace std;
int main(){
	
	default_random_engine uretec;
	
	//default_random_engine uretec(946524);

	//unsigned tohum=chrono::system_clock::now().time_since_epoch().count();
	//default_random_engine uretec(tohum);
	
	

	cout<<"rastgele bir sayı	: "<<uretec()<<endl;
	cout<<"rastgele bir sayı	: "<<uretec()<<endl;
	cout<<"rastgele bir sayı	: "<<uretec()<<endl;
	cout<<"rastgele bir sayı	: "<<uretec()<<endl;
	
	return 0;
}
