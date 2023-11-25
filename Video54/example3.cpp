#include<iostream>
#include<thread>
using namespace std;

void sifirYaz(int tekrar,int bekleMs){
	for(int i=0;i<tekrar;i++){
		cout<<0<<endl;
		this_thread::sleep_for(1ms*bekleMs);
	}

}
void birYaz(int tekrar,int bekleMs){
	for(int i=0;i<tekrar;i++){
		cout<<1<<endl;
		this_thread::sleep_for(1ms*bekleMs);
	}
}

int main ()
{
	sifirYaz(20,200);
	birYaz(20,200);
	
	/*
	thread t1(sifirYaz,20,200);
	thread t2(birYaz,20,200);
	t1.join();
	t2.detach();//t2.join();
	*/	
	
  	return 0;
}
