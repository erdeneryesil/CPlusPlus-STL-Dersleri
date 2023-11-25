#include <iostream>  
#include <thread>        
#include <future>        
using namespace std;

void toplamHesapla(int ilk, int son,promise<int>& prom){
	int toplam=0;
	for(int i=ilk;i<=son;i++){
		toplam+=i;
		this_thread::sleep_for(2ms);
	}

	prom.set_value(toplam);
}

int main (){

  	promise<int> prom;                
	future<int> fut = prom.get_future();    
	
	thread t(toplamHesapla,99,1999,ref(prom));
	t.join();
	
	//sayıların toplamı hesaplanana kadar beklenecek
	cout<<fut.get()<<endl;
	
  	return 0;
}

