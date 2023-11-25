#include<iostream>
#include<chrono>
#include<random>
using namespace std;

template<typename UretecTip>
void uretecBilgiVer(UretecTip uretec){
	cout<<"min 			: "<<uretec.min()<<endl;
	cout<<"max 			: "<<uretec.max()<<endl;
	
	cout<<"birinci rastgele sayı 	: "<<uretec()<<endl;
	cout<<"ikinci rastgele sayı 	: "<<uretec()<<endl;

}

int main(){
	
	unsigned tohum=chrono::system_clock::now().time_since_epoch().count();
	
	cout<<"-----------------------\ndefault_random_engine"<<endl;
	default_random_engine uretec1(tohum);
	uretecBilgiVer(uretec1);
	
	cout<<"-----------------------\nminstd_rand"<<endl;
	minstd_rand uretec2(tohum);
	uretecBilgiVer(uretec2);
	
	cout<<"-----------------------\nminstd_rand0"<<endl;
	minstd_rand0 uretec3(tohum);
	uretecBilgiVer(uretec3);
	
	cout<<"-----------------------\nmt19937"<<endl;
	mt19937 uretec4(tohum);
	uretecBilgiVer(uretec4);
	
	cout<<"-----------------------\nmt19937_64"<<endl;
	mt19937_64 uretec5(tohum);
	uretecBilgiVer(uretec5);
	
	cout<<"-----------------------\nranlux24_base"<<endl;
	ranlux24_base uretec6(tohum);
	uretecBilgiVer(uretec6);

	cout<<"-----------------------\nranlux48_base"<<endl;
	ranlux48_base uretec7(tohum);
	uretecBilgiVer(uretec7);
	
	cout<<"-----------------------\nranlux24"<<endl;
	ranlux24 uretec8(tohum);
	uretecBilgiVer(uretec8);
	
	cout<<"-----------------------\nranlux48"<<endl;
	ranlux48 uretec9(tohum);
	uretecBilgiVer(uretec9);
	
	cout<<"-----------------------\nknuth_b"<<endl;
	knuth_b uretec10(tohum);
	uretecBilgiVer(uretec10);
	
	return 0;
}
