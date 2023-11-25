#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
using namespace std;
using namespace chrono;

timed_mutex mtx;

int x=0;
void artir(string threadAd){
	auto suan=system_clock::now();
	if(mtx.try_lock_until(suan+1ms)){//1ms sonrasına kadar bekleyecek, kilitleyebilirse (true)
		this_thread::sleep_for(2ms);//kilitlemiş olan thread burada 2ms bekleyecek
		x++;
		cout<<threadAd<<" işlem yaptı"<<endl;
		mtx.unlock();
	}else ////1ms sonrasına kadar bekleyecek, kilitleyemezse (false)
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
