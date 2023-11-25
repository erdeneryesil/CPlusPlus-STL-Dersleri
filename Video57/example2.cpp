#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int x=0;
mutex mtx;

void birMilyonArtir(){

	for(int i=0;i<1000000;i++){
		mtx.lock();
		x++;
		mtx.unlock();
	}
	
	/*
	for(int i=0;i<1000000;i++){
		lock_guard<mutex> lg(mtx);
		x++;
	}//kapsam dışına çıkıldığı için mutex nesnesi otomatik olarak unlock edilir
	*/
}

int main ()
{

	//lock_guard
	
	thread t1(birMilyonArtir);
	thread t2(birMilyonArtir);
	t1.join();
	t2.join();
	
	cout<<x<<endl;
	
  	return 0;
}
