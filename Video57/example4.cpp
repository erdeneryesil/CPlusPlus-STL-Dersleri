#include<iostream>       
#include<thread>         
#include<mutex>        
#include<shared_mutex>	
using namespace std;

mutex mtx;          
shared_mutex shrMtx;

void sifirYaz(int tekrar){
	unique_lock<mutex> ul(mtx);
	//shared_lock<shared_mutex> sl(shrMtx);
	
	for(int i=0;i<tekrar;i++){cout<<0;this_thread::sleep_for(10ms);}cout<<endl;
}
void birYaz(int tekrar){
	unique_lock<mutex> ul(mtx);
	//shared_lock<shared_mutex> sl(shrMtx);
	
	for(int i=0;i<tekrar;i++){cout<<1;this_thread::sleep_for(10ms);}cout<<endl;
}
void ikiYaz(int tekrar){
	unique_lock<mutex> ul(mtx);
	//shared_lock<shared_mutex> sl(shrMtx);
	
	for(int i=0;i<tekrar;i++){cout<<2;this_thread::sleep_for(10ms);}cout<<endl;
}
void ucYaz(int tekrar){
	unique_lock<mutex> ul(mtx);
	//shared_lock<shared_mutex> sl(shrMtx);
	
	for(int i=0;i<tekrar;i++){cout<<3;this_thread::sleep_for(10ms);}cout<<endl;
}
int main ()
{
	//unique_lock, shared_lock
	
  	thread t0 (sifirYaz,50);
  	thread t1 (birYaz,50);
  	thread t2 (ikiYaz,50);
	thread t3 (ucYaz,50);
	
 	t0.join();
  	t1.join();
  	t2.join();
  	t3.join();

	return 0;
}
