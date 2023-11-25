#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

once_flag of;//call_once kullanan tüm thread'lerin senkronizasyonu için once_flag nesnesine ihtiyacımız var

mutex mtx;//sadece cout için kullanacağız

int yil=-1;
void yilYukle(){
	yil=2020;
	mtx.lock();cout<<"Yıl yüklendi: "<<yil<<endl;mtx.unlock();
}

void buYil(){
	call_once(of,yilYukle);
	mtx.lock();cout<<"Bu yıl "<<yil<<endl;mtx.unlock();
}
void birYilSonra(){
	call_once(of,yilYukle);
	mtx.lock();cout<<"1 yıl sonra "<<yil+1<<endl;mtx.unlock();
}
void ikiYilSonra(){
	call_once(of,yilYukle);
	mtx.lock();cout<<"2 yıl sonra "<<yil+2<<endl;mtx.unlock();
}

int main ()
{
	thread t1(buYil);
	thread t2(birYilSonra);
	thread t3(ikiYilSonra);
	
	t1.join();
	t2.join();
	t3.join();

  	return 0;
}
