#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex mtx1;
mutex mtx2;

void fonksiyon1(){
	/*
	mtx1.lock();
	mtx2.lock();
	this_thread::sleep_for(100ms);
	cout<<"fonksiyon1"<<endl;
	mtx1.unlock();
	mtx2.unlock();
	*/

	scoped_lock<mutex,mutex>sl(mtx1,mtx2);
	this_thread::sleep_for(100ms);
	cout<<"fonksiyon1"<<endl;
	
}
void fonksiyon2(){

	/*
	mtx2.lock();
	mtx1.lock();
	this_thread::sleep_for(100ms);
	cout<<"fonksiyon2"<<endl;
	mtx2.unlock();
	mtx1.unlock();
	*/

	scoped_lock<mutex,mutex> sl(mtx1,mtx2);
	this_thread::sleep_for(100ms);
	cout<<"fonksiyon2"<<endl;
}
int main ()
{

	//scoped_lock
	
	thread t1(fonksiyon1);
	thread t2(fonksiyon2);
	t1.join();
	t2.join();
		
  	return 0;
}
