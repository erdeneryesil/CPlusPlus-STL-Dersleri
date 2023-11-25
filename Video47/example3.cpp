#include<iostream>
#include<chrono>
#include<random>

using namespace std;
int main(){

	default_random_engine uretec;

	cout<<uretec.min()<<endl;
	cout<<uretec.max()<<endl;
	
	return 0;
}
