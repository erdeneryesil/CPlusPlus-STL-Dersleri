#include<iostream>       
#include<thread>
#include<queue>
#include<condition_variable>
using namespace std;

queue<int> hazne;
int hazneKapasite=10;//haznenin aynı anda barındırabileceği ürün sayısı
bool uretimTamamlandi=false;

mutex mtx;
condition_variable cv;

void uret(int adet){
	for(int urun=0;urun<adet;urun++){
		//this_thread::sleep_for(5ms);
		unique_lock<mutex> ul(mtx);
		cv.wait(ul,[](){return hazne.size()<hazneKapasite;});
//lambda expression false döndürürse	:Bekle
//lambda expression true döndürürse	:Ürün üret ve hazneye ekle
		hazne.push(urun);
		cout<<urun<<" _____Üretildi"<<endl;
		cv.notify_one();//herbir ürün üretildiğinde tüketim thread i uyandırılıyor
	}
	
	{
		lock_guard<mutex> lg(mtx);
		uretimTamamlandi=true;//tuket fonksiyonunda kullanılıyor
	}
	cv.notify_one();//üretim tamamlandığında da tüketim thread i uyandırılıyor
}

void tuket(){
	while(!uretimTamamlandi){
		//this_thread::sleep_for(5ms);
		unique_lock<mutex> ul(mtx);
		cv.wait(ul,[](){return hazne.size()>0 || uretimTamamlandi;});
//lambda expression false döndürürse	:Bekle
//lambda expression true döndürürse	:Haznedeki ürünlerin hepsini sırasıyla tüket
		while(!hazne.empty()){
			int urun=hazne.front();
			hazne.pop();
			cout<<urun<<" Tüketildi"<<endl;
			cv.notify_one();
		}
	}
}

int main ()
{
	thread t1(uret,10);
	thread t2(tuket);
	t1.join();
	t2.join();

  	return 0;
}
