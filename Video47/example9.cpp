#include<iostream>
#include<random>
using namespace std;

int main(){

	default_random_engine uretec;
	normal_distribution<double> dagilim (5.0,2.0); //ortalama, standart sapma
	
	int ornekSayisi=1000000;	//kaç tane rastgele sayı üretilecek
	int grupSayisi=10;		
	int gruplar[grupSayisi]{};//kaç adet 0-1,..., kaç adet 9-10 arası
	int maxYildizSayisi=20; //en çok çıkan değerin yıldız sayısı
	int maxOrnek=-1;	//en çok çıkan değerin sayısı 
	
	for(int i=0;i<ornekSayisi;i++){
		double rastgele=dagilim(uretec);
		if(rastgele>=0.0 && rastgele<=10.0){//0.0 ile 10.0 arası
			gruplar[(int)rastgele]++;
			if(maxOrnek<gruplar[(int)rastgele])maxOrnek=gruplar[(int)rastgele];
		}
	}
	
	cout<<"normal_distribution("<<dagilim.param().mean()<<","<<dagilim.param().stddev()<<")"<<endl;
	for(int i=0;i<grupSayisi;i++){
		cout<<i<<"-"<<i+1<<"\t:";
		int yildizSayisi=maxYildizSayisi*gruplar[i]/maxOrnek;
		for(int j=0;j<yildizSayisi;j++){
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}
