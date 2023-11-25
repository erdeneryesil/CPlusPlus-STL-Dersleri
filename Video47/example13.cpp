#include<iostream>
#include<random>
using namespace std;

int main(){

	default_random_engine uretec;
	discrete_distribution<int> dagilim {5,4,3,2,1,1,2,3,4,5};
	//0-9 arası rastgele sayı üretilmesi için 10 adet olasılık katsayısı
	
	int ornekSayisi=1000000;	//kaç tane rastgele sayı üretilecek
	int grupSayisi=10;		
	int gruplar[grupSayisi]{};//kaç adet 0,..., kaç adet 9
	int maxYildizSayisi=20; //en çok çıkan değerin yıldız sayısı
	int maxOrnek=-1;	//en çok çıkan değerin sayısı 
	
	for(int i=0;i<ornekSayisi;i++){
		int rastgele=dagilim(uretec);//0-9 arası
		gruplar[rastgele]++;
		if(maxOrnek<gruplar[rastgele])maxOrnek=gruplar[rastgele];
		
	}
	
	cout<<"discrete_distribution"<<endl;
	for(int i=0;i<grupSayisi;i++){
		cout<<i<<"	 :";
		int yildizSayisi=maxYildizSayisi*gruplar[i]/maxOrnek;
		for(int j=0;j<yildizSayisi;j++){
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}
