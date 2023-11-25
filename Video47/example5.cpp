#include<iostream>
#include<random>
using namespace std;

int main(){
	
	
	random_device uretec;
	
	cout<<"min			: "<<uretec.min()<<endl;
	cout<<"max			: "<<uretec.max()<<endl;
	cout<<"entropy			: "<<uretec.entropy()<<endl;
	cout<<"-----------------------------------------"<<endl;
	
  	cout<<"rastgele bir sayı	: "<<uretec()<<endl;
			
	return 0;
}

