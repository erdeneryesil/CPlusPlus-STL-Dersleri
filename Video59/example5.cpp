#include<iostream>       
#include<thread>         
#include<future>
using namespace std;

void sifirYaz(int tekrar){
	for(int i=0;i<tekrar;i++){
		cout<<0;
		this_thread::sleep_for(10ms);
	}
	cout<<endl;
}
void birYaz(int tekrar){
	for(int i=0;i<tekrar;i++){
		cout<<1;
		this_thread::sleep_for(10ms);
	}
	cout<<endl;
}

int main ()
{
	//launch::async,launch::deferred
	
	
//f1 ve f2; get() fonksiyonunu beklemeden, yeni birer thread üzerinde, asenkron çalışmaya başlar
	future<void> f1=async(launch::async,sifirYaz,30);
	future<void> f2=async(launch::async,birYaz,30);

	f1.get();
	f2.get();
	
	
	
		
	future<void> f3=async(launch::deferred,sifirYaz,30);
	future<void> f4=async(launch::deferred,birYaz,30);

//f3 ve f4; get() fonksiyonu çağırıldığınfa, mevcut thread(main) üzerinde çalışmaya başlayacak
	f3.get();
	f4.get();

  	return 0;
}
