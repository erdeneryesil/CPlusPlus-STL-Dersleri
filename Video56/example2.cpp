#include<iostream>
#include<thread>
#include<mutex>
#include<cmath>
using namespace std;

recursive_timed_mutex mtx;

int x=2;

void kareAl(string threadAd,int kacKere){
	if(kacKere==0)return;
	mtx.lock();
	this_thread::sleep_for(1s);
	x=pow(x,2);
	cout<<threadAd<<" kilitledi x = "<<x<<endl;
	kareAl(threadAd,--kacKere);
	
	mtx.unlock();
	cout<<threadAd<<" kilidi açıldı"<<endl;
}
void kareKokAl(string threadAd,int kacKere){
	if(kacKere==0)return;
	
	if(mtx.try_lock_for(1s)){
	x=sqrt(x);
	cout<<threadAd<<" kilitledi x = "<<x<<endl;
	kareKokAl(threadAd,--kacKere);
	
	mtx.unlock();
	cout<<threadAd<<" kilidi açıldı"<<endl;
	}else{
		cout<<threadAd<<" işlem yapamadı.\n";
		kareKokAl(threadAd,--kacKere);
	}
}

int main ()
{
	cout<<"x = "<<x<<endl;
	
	thread t1(kareAl,"kareAl",4); //4,16,256,65536
	thread t2(kareKokAl,"kareKokAl",4);  //65536,256,16,4,2
	t1.join();
	t2.join();
	
  	return 0;
}
