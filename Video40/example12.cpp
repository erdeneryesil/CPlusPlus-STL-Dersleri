#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    	//min, max, minmax(c++11)

    	int enKucukDeger=min({44,11,33,55,22});
    	int enBuyukDeger=max({44,11,33,55,22});
  	pair<int,int> pairDeger=minmax({44,11,33,55,22});

    	cout<<"enKucukDeger         :"<<enKucukDeger<<endl;
    	cout<<"enBuyukDeger         :"<<enBuyukDeger<<endl;
    	cout<<"pairDeger.first      :"<<pairDeger.first<<endl;
    	cout<<"pairDeger.second     :"<<pairDeger.second<<endl;


	cout<<"--------\n";
	auto kucukMu=[](int x,int y){return x<y;};	
	enKucukDeger=min({44,11,33,55,22},kucukMu);
    	enBuyukDeger=max({44,11,33,55,22},kucukMu);
  	pairDeger=minmax({44,11,33,55,22},kucukMu);
	
    	cout<<"enKucukDeger         :"<<enKucukDeger<<endl;
    	cout<<"enBuyukDeger         :"<<enBuyukDeger<<endl;
    	cout<<"pairDeger.first      :"<<pairDeger.first<<endl;
    	cout<<"pairDeger.second     :"<<pairDeger.second<<endl;


	return 0;
}
