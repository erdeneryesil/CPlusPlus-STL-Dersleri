#include <iostream>
#include<chrono>

using namespace std;
using namespace chrono;

int main(){
	
	duration<int,ratio<60,1>> birDakika(1);
	duration<int,ratio<60*60,1>> birSaat(1);
	duration<int,ratio<60*60*24,1>> birGun(1);
	
	system_clock::time_point suAn=system_clock::now();
	system_clock::time_point besDakikaSonra=suAn+birDakika*5;
	system_clock::time_point ucSaatSonra=suAn+birSaat*3;
	system_clock::time_point dortGunSonra=suAn+birGun*4;
	
	time_t suAnT=system_clock::to_time_t(suAn);
	time_t besDakikaSonraT=system_clock::to_time_t(besDakikaSonra);
	time_t ucSaatSonraT=system_clock::to_time_t(ucSaatSonra);
	time_t dortGunSonraT=system_clock::to_time_t(dortGunSonra);
	
	cout<<"Şu an 		: "<<ctime(&suAnT)<<endl;
	cout<<"5dk sonra 	: "<<ctime(&besDakikaSonraT)<<endl;
	cout<<"3 saat sonra 	: "<<ctime(&ucSaatSonraT)<<endl;
	cout<<"4 gün sonra 	: "<<ctime( &dortGunSonraT)<<endl;

	return 0;
}
