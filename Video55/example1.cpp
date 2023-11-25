#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int x=0;
//mutex mtx;

void birMilyonArtir(){
	for(int i=0;i<1000000;i++){
		//mtx.lock();
		x++;
		//mtx.unlock();
	}
}

int main ()
{
	thread t1(birMilyonArtir);
	thread t2(birMilyonArtir);
	t1.join();
	t2.join();
	
	cout<<x<<endl;
	
  	return 0;
}
