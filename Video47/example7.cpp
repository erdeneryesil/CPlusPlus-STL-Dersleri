#include<iostream>
#include<random>
using namespace std;

int main(){

	default_random_engine uretec;
	uniform_int_distribution<int> dagilim(0,9);
	
	int ornekSayisi=1000000;	//kaç tane rastgele sayı üretilecek
	
	int grupSayisi=10;		//0-9 arasında
	int gruplar[grupSayisi]{};		//kaç adet 0, ... , kaç adet 9	
	int maxYildizSayisi=20; //0-9 arasından en çok çıkan değerin yıldız sayısı
	int maxOrnek=-1;	//0-9 arasından en çok çıkan değerin sayısı 
	
	for(int i=0;i<ornekSayisi;i++){
		int rastgele=dagilim(uretec);//0-9 arasında bir sayı olacak
		gruplar[rastgele]++;
		if(maxOrnek<gruplar[rastgele])maxOrnek=gruplar[rastgele];
	}
	
	cout<<"uniform_int_distribution"<<endl;
	for(int i=0;i<grupSayisi;i++){
		cout<<i<<" :";
		int yildizSayisi=maxYildizSayisi*gruplar[i]/maxOrnek;
		for(int j=0;j<yildizSayisi;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
