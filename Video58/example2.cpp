#include<iostream>       
#include<thread>
#include<condition_variable>
using namespace std;

mutex mtx;
condition_variable cv;

bool oyalamaBitti=false;

void oyala(){
	this_thread::sleep_for(3000ms);
	
	mtx.lock();
	oyalamaBitti=true;
	mtx.unlock();
	
	cv.notify_all();
	
	//cv.notify_one();
	//cv.notify_one();
	//cv.notify_one();
	//cv.notify_one();

}
void bekle(string id){
	unique_lock<mutex> ul(mtx);
	cout<<"Bekliyor..."<<id<<endl;
	cv.wait(ul,[](){return oyalamaBitti;});
	cout<<"Bekleme bitti "<<id<<endl;	
}

int main ()
{
	thread tOyala(oyala);
	thread t1(bekle,"A");
	thread t2(bekle,"B");
	thread t3(bekle,"C");
	thread t4(bekle,"D");

	tOyala.join();
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	
  	return 0;
}
