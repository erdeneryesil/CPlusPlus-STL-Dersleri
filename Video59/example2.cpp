#include<iostream>
#include<thread>
#include<optional>
using namespace std;

optional<int> sonuc;

void toplamHesapla(int ilk, int son){
	int toplam=0;
	for(int i=ilk;i<=son;i++){
		toplam+=i;
		this_thread::sleep_for(2ms);
	}
	
	sonuc=toplam;
}

void sonucGoster(){
	if(!sonuc.has_value()){
		cout<<"Bekliyor..."<<endl;
		this_thread::sleep_for(500ms);
		sonucGoster();
	}else{
		cout<<sonuc.value()<<endl;
	}
}

int main ()
{
		
	thread t1(toplamHesapla,99,1999);
	thread t2(sonucGoster);
	
	t1.join();
	t2.join();
	
  	return 0;
}
