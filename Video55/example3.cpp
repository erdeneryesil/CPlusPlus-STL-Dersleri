#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

mutex mtx;
int x=0;
void birMilyonArtir(){
	for(int i=0;i<1000000;i++){
		if(mtx.try_lock()){
			x++;
			mtx.unlock();
		}
	}
}

int main ()
{
	//try_lock()
	
	thread t1(birMilyonArtir);
	thread t2(birMilyonArtir);
	t1.join();
	t2.join();
	
	cout<<x<<endl;
	
  	return 0;
}
