#include<iostream>
#include<random>
using namespace std;

int main(){

	default_random_engine uretec;
	geometric_distribution<int> dagilim(0.3);
	
	int ornekSayisi=1000000;	//kaç tane rastgele sayı üretilecek
	
	int grupSayisi=10;		
	int gruplar[grupSayisi]{};//kaç adet 0,..., kaç adet 9
	int maxYildizSayisi=20; //en çok çıkan değerin yıldız sayısı
	int maxOrnek=-1;	//en çok çıkan değerin sayısı 

	for(int i=0;i<ornekSayisi;i++){
		int rastgele=dagilim(uretec);
		if(rastgele<grupSayisi){
			gruplar[rastgele]++;
			if(maxOrnek<gruplar[rastgele])maxOrnek=gruplar[rastgele];
		}		
	}
	
	cout<<"geometric_distribution("<<dagilim.p()<<")"<<endl;
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
