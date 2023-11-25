#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

once_flag of;//call_once kullanan tüm thread'lerin senkronizasyonu için once_flag nesnesine ihtiyacımız var

void sadece1Kere(){
	cout<<"Selam";	
}

void fonksiyon1(){
	call_once(of,sadece1Kere);
	cout<<" fonksiyon1 ";
}
void fonksiyon2(){
	call_once(of,sadece1Kere);
	cout<<" fonksiyon2 ";
}
void fonksiyon3(){
	call_once(of,sadece1Kere);
	cout<<" fonksiyon3 ";
}

int main ()
{
	thread t1(fonksiyon1);
	thread t2(fonksiyon2);
	thread t3(fonksiyon3);
	
	t1.join();
	t2.join();
	t3.join();

  	return 0;
}
