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
	//future sınıfı ve async fonksiyonu
	
	future<int> f=async(toplamHesapla,99,1999);
		
	cout<<"Toplanıyor..."<<endl;

	int sonuc=f.get();//toplamHesapla fonksiyonunun sonucu döndürmesi bekleniyor
	
	cout<<"Toplam="<<sonuc<<endl;
	

  	return 0;
}
