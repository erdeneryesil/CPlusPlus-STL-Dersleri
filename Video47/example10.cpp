#include<iostream>
#include<random>
using namespace std;

int main(){

	default_random_engine uretec;
	bernoulli_distribution dagilim(0.5);//true gelme olasılığı
	
	int ornekSayisi=1000000;	//kaç tane rastgele sayı üretilecek
	
	int grupSayisi=2;		//true, false
	int gruplar[grupSayisi]{};//kaç adet true, kaç adet false
	int maxYildizSayisi=20; //en çok çıkan değerin yıldız sayısı
	int maxOrnek=-1;	//en çok çıkan değerin sayısı 
	
	for(int i=0;i<ornekSayisi;i++){
		int rastgele=dagilim(uretec);//0 ya da 1 (true-false)
		gruplar[rastgele]++;
		if(maxOrnek<gruplar[rastgele])maxOrnek=gruplar[rastgele];
	}
	
	cout << boolalpha; 
	
	cout<<"bernoulli_distribution("<<dagilim.p()<<")"<<endl;
	for(int i=0;i<grupSayisi;i++){
		cout<<(bool)i<<"	 :";
		int yildizSayisi=maxYildizSayisi*gruplar[i]/maxOrnek;
		for(int j=0;j<yildizSayisi;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
