#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

timed_mutex mtx;

int x=0;
void artir(string threadAd){
	if(mtx.try_lock_for(1ms)){//1ms bekleyecek, bu süre sonunda kilitleyebilmiş ise (true)
		this_thread::sleep_for(2ms);//kilitlemiş olan thread burada 2ms bekleyecek
		x++;
		cout<<threadAd<<" işlem yaptı"<<endl;
		mtx.unlock();
	}else //1ms bekleyecek, bu süre sonunda hala kilitleyememiş ise (false)
		cout<<threadAd<<" işlem yapamadı"<<endl;
}

int main ()
{
	thread t1(artir,"t1");
	thread t2(artir,"t2");
	t1.join();
	t2.join();
	
	cout<<"x:"<<x<<endl;
	
  	return 0;
}
