#include<iostream>
#include<thread>
#include<future>
using namespace std;

int toplamHesapla(int ilk, int son){
	int toplam=0;
	for(int i=ilk;i<=son;i++){
		toplam+=i;
		this_thread::sleep_for(2ms);
	}

	return toplam;
}

int main ()
{
	//wait_for
	//future_status::ready, future_status::timeout
	
	future<int> f=async(toplamHesapla,99,1999);
		
	cout<<"Toplanıyor";
	
	//100ms aralıklarla hazır olup olmadığını kontrol et
	while (f.wait_for(100ms)==future_status::timeout)
	//while (f.wait_for(100ms)!=future_status::ready)
    		cout << '.' << flush;
    	    	
	int sonuc=f.get();//toplamHesapla fonksiyonunun sonucu döndürmesi bekleniyor
	cout<<"\nToplam="<<sonuc<<endl;
	

  	return 0;
}
