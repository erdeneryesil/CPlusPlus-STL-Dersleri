#include<iostream>
#include<thread>
#include<mutex>
#include<chrono>
using namespace std;
using namespace chrono;

mutex mtx1;
mutex mtx2;

void fonksiyon1(){
	mtx1.lock();
	this_thread::sleep_for(100ms);//bu esnada fonksiyon2 içinde, mtx2 lock ediliyor
	mtx2.lock();//fonksiyon2 içindeki mtx2 henüz unlock edilmediği için burada lock edilemez
	cout<<"fonksiyon1"<<endl;
	mtx1.unlock();
	mtx2.unlock();
}
void fonksiyon2(){
	mtx2.lock();
	this_thread::sleep_for(100ms);//bu esnada fonksiyon1 içinde, mtx1 lock ediliyor
	mtx1.lock();//fonksiyon1 içindeki mtx1 henüz unlock edilmediği için burada lock edilemez
	cout<<"fonksiyon2"<<endl;
	mtx2.unlock();
	mtx1.unlock();
}
int main ()
{
	thread t1(fonksiyon1);
	thread t2(fonksiyon2);
	t1.join();
	t2.join();
		
  	return 0;
}
