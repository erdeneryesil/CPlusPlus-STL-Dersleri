#include <iostream>
#include<ratio>

using namespace std;

int main(){

	typedef ratio<1,3> birBoluUc;
	typedef ratio<1,4> birBoluDort;

	//ratio_add
	typedef ratio_add<birBoluUc,birBoluDort> toplam;
	cout<<"Toplam:"<<endl;
	cout<<toplam::num<<"/"<<toplam::den<<endl;		// 7/12
	cout<<(double)toplam::num/(double)toplam::den<<endl;	// 0.583333
	
	//ratio_subtract
	typedef ratio_subtract<birBoluUc,birBoluDort> fark;	
	cout<<"\nFark:"<<endl;				
	cout<<fark::num<<"/"<<fark::den<<endl;			// 1/12
	cout<<(double)fark::num/(double)fark::den<<endl;		// 0.0833333
	
	//ratio_multiply
	typedef ratio_multiply<birBoluUc,birBoluDort> carpim;
	cout<<"\nÇarpım:"<<endl;
	cout<<carpim::num<<"/"<<carpim::den<<endl;		// 1/12
	cout<<(double)carpim::num/(double)carpim::den<<endl;	// 0.0833333
	
	//ratio_divide
	typedef ratio_divide<birBoluUc,birBoluDort> bolum;
	cout<<"\nBölüm:"<<endl;
	cout<<bolum::num<<"/"<<bolum::den<<endl;		// 4/3
	cout<<(double)bolum::num/(double)bolum::den<<endl;	// 1.33333
	
	return 0;
}
