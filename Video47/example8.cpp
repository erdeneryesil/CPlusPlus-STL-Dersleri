#include<iostream>
#include<random>
using namespace std;

int main(){

	default_random_engine uretec;
	uniform_real_distribution<double> dagilim(0.0,1.0);
	
	int ornekSayisi=1000000;	//kaç tane rastgele sayı üretilecek
	
	int grupSayisi=10;		//0.0-1.0 arasında
	int gruplar[grupSayisi]{};//kaç adet 0, ... , kaç adet 9
	int maxYildizSayisi=20; //0-9 arasından en çok çıkan değerin yıldız sayısı
	int maxOrnek=-1;	//0-9 arasından en çok çıkan değerin sayısı 
	
	for(int i=0;i<ornekSayisi;i++){
		int rastgele=dagilim(uretec)*grupSayisi;
		gruplar[rastgele]++;
		if(maxOrnek<gruplar[rastgele])maxOrnek=gruplar[rastgele];
	}
	
	cout <<fixed; 
	cout.precision(1);
	cout<<"uniform_real_distribution"<<endl;
	for(int i=0;i<grupSayisi;i++){
		cout<<double(i)/grupSayisi<<"-"<<(double(i)+1)/grupSayisi<<" :";
		int yildizSayisi=maxYildizSayisi*gruplar[i]/maxOrnek;
		for(int j=0;j<yildizSayisi;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
