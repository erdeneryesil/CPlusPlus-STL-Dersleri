#include <iostream>
#include<chrono>

using namespace std;
using namespace chrono;

int main(){

	//duration_cast
	
	typedef chrono::duration<int> Saniye;
	typedef chrono::duration<int,milli> Milisaniye;
	typedef chrono::duration<int,ratio<60,1>> Dakika;
	typedef chrono::duration<int,ratio<60*60,1>> Saat;
	typedef chrono::duration<int,ratio<60*60*24,1>> Gun;
	
	Gun ikiGun(2);
	Saat ikiGunSaat=duration_cast<Saat>(ikiGun);
	Dakika ikiGunDakika=duration_cast<Dakika>(ikiGun);
	Saniye ikiGunSaniye=duration_cast<Saniye>(ikiGun);
	Milisaniye ikiGunMilisaniye=duration_cast<Milisaniye>(ikiGun);
	
	cout<<ikiGun.count()<<" Gün :"<<endl;
	cout<<ikiGunSaat.count()<<" saat,"<<endl;
	cout<<ikiGunDakika.count()<<" dakika,"<<endl;
	cout<<ikiGunSaniye.count()<<" saniye,"<<endl;
	cout<<ikiGunMilisaniye.count()<<" milisaniye."<<endl;
	
	return 0;
}

