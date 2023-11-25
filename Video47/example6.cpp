#include<iostream>
#include<random>
using namespace std;

int main(){
	
	random_device tohum;
	default_random_engine uretec(tohum());
	
	cout<<"rastgele bir sayı	: "<<uretec()<<endl;	
	
	return 0;
}
