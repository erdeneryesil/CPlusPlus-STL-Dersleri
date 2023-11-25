#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

//mutex mtx;

void merhabaYaz(){
	//mtx.lock();
	cout<<"MERHABA"<<endl;
	//mtx.unlock();
}
void selamYaz(){
	//mtx.lock();
	cout<<"SELAM"<<endl;
	//mtx.unlock();
}

int main ()
{
	thread t1(merhabaYaz);
	thread t2(selamYaz);
	t1.join();
	t2.join();
	
  	return 0;
}
