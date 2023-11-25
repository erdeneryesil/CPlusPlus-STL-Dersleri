#include<iostream>
#include<chrono>
#include<thread>
using namespace std;
using namespace chrono;

int main ()
{
	cout<<"Birinci bekleme : 3.5 saniye bekleniyor"<<endl;
	this_thread::sleep_for(3s+500ms);
	cout<<"Birinci bekleme süresi doldu"<<endl;

	system_clock::time_point yarin=system_clock::now()+24h;
	cout<<"İkinci bekleme : Yarına kadar bekleniyor"<<endl;
	this_thread::sleep_until(yarin);
	cout<<"İkinci bekleme süresi doldu"<<endl;
	
	cout<<"Programdan çıkıldı"<<endl;
	
  	return 0;
}

