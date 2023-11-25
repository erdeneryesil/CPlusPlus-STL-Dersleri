#include<iostream>
#include<thread>
using namespace std;

int toplamHesapla(int ilk, int son){
	int toplam=0;
	for(int i=ilk;i<=son;i++){
		toplam+=i;
	}
	
	return toplam;
}

int main ()
{
	int sonuc;	
	thread t1(toplamHesapla,99,1999);
	t1.join();
	
  	return 0;
}
