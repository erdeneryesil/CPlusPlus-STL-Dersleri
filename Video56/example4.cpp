#include<iostream>
#include<thread>
#include<shared_mutex>
#include<chrono>
using namespace std;
using namespace chrono;

int x = 0;
shared_timed_mutex mtx;

void fonksiyonA(){//kritik veri olan x değişkenine herhangi bir yazma işlemi yok
	if(mtx.try_lock_for(1s)){//mtx.try_lock_shared_for(1s)
		this_thread::sleep_for(2s);
		int a=x;
		mtx.unlock();//mtx.unlock_shared();
	}else{cout<<"fonksiyonA işlem yapamadı"<<endl;}
}
void fonksiyonB(){//kritik veri olan x değişkenine herhangi bir yazma işlemi yok
	if(mtx.try_lock_for(1s)){//mtx.try_lock_shared_for(1s)
		this_thread::sleep_for(2s);
		int b=x;
		mtx.unlock();//mtx.unlock_shared();
	}else{cout<<"fonksiyonB işlem yapamadı"<<endl;}
}
void fonksiyonC(){//kritik veri olan x değişkenine herhangi bir yazma işlemi yok
	if(mtx.try_lock_for(1s)){//mtx.try_lock_shared_for(1s)
		this_thread::sleep_for(2s);
		int c=x;
		mtx.unlock();//mtx.unlock_shared();
	}else{cout<<"fonksiyonC işlem yapamadı"<<endl;}
}

void fonksiyon(){//kritik veri olan x değişkeninin değerini artırıyor
	mtx.lock();
	this_thread::sleep_for(2s);
	x=99;
	mtx.unlock();
}

int main() {

  	steady_clock::time_point baslamaAni=steady_clock::now();
  
  	thread tA(fonksiyonA);
  	thread tB(fonksiyonB);
  	thread tC(fonksiyonC);
  	thread t(fonksiyon);

  	tA.join();
  	tB.join();
  	tC.join();
  	t.join();

  	steady_clock::time_point bitisAni=steady_clock::now();
	duration<double> sure=duration_cast<duration<double>>(bitisAni-baslamaAni);
    	cout<<sure.count()<<"sn sürdü"<<endl;
  	
  	cout<<"x="<<x<<endl;
}
