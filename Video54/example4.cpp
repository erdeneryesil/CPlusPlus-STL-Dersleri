#include<iostream>
#include<thread>
using namespace std;

void fonksiyon(){
	for(int i=0;i<20;i++){
		cout<<i<<endl;
		this_thread::sleep_for(100ms);
	}
}

int main ()
{
	thread t1(fonksiyon);//thread tamamlanmadan, t1 nesnesi yıkıldığı için hata oluşur 
	
	//thread t2(fonksiyon);
	//t2.join();
	//join(): thread'in tamamlanması beklenir ardından  t2 nesnesi yıkılır.
	//t2 nesnesi, main thread'ına bağlanmıştır
	
	//thread t3(fonksiyon);
	//t3.detach();
	//this_thread::sleep_for(300ms);
	//detach(): thread tamamlanmasa bile, sorunsuz bir şekilde t3 nesnesi yıkılır 
	//t3 nesnesi, main thread'ından ayrılmıştır
	
	cout<<"main() fonksiyonu tamamlandı"<<endl;
  	return 0;
}
