#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//clamp c++17

	int deger1=-200;
	int deger2=200;
	int deger3=50;

	int altSinir=0,ustSinir=100;

	/*
	kıyaslama sıralaması (varsayılan < )
	 	deger<altSinir	doğruya 	return altSinir
		ustSinir<deger	doğruysa 	return ustSinir
		yukarıdakiler 	doğru değilse 	return deger
	*/

	int sonuc;
	sonuc=clamp(deger1,altSinir,ustSinir);
	cout<<sonuc<<endl;	
	//deger<altSinir	-200 < 0	true	return 0(altSinir)
		
	sonuc=clamp(deger2,altSinir,ustSinir);
	cout<<sonuc<<endl;	
	//deger<altSinir	200 < 0		false 
	//ustSinir<deger	100 < 200	true	return 100(ustSinir)

	sonuc=clamp(deger3,altSinir,ustSinir);
	cout<<sonuc<<endl;	
	//deger<altSinir	50 < 0 		false
	//ustSinir<deger	100 < 50 	false
	//return 50(deger)

	auto buyukMu=[](int x,int y){return x>y;};

	sonuc=clamp(deger1,ustSinir,altSinir,buyukMu); //parametre sıralaması değişir
	cout<<sonuc<<endl;
	//deger>ustSinir	-200 > 100	false
	//altSinir>deger	0 > -200 	true	return 0(altSinir)

	sonuc=clamp(deger2,ustSinir,altSinir,buyukMu); //parametre sıralaması değişir
	cout<<sonuc<<endl;
	//deger>ustSinir	200 > 100 	true	return 100(ustSinir)

	sonuc=clamp(deger3,ustSinir,altSinir,buyukMu); //parametre sıralaması değişir
	cout<<sonuc<<endl;
	//deger>ustSinir	50 > 100 	false	
	//altSinir>deger	0 > 50 		false
	//return 50(deger)

	return 0;
}
