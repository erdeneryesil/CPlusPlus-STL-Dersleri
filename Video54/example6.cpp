#include<iostream>
#include<thread>
using namespace std;
class ToplaSinif{
	public:
		static void staticFonksiyon(int ilk,int son){
			int toplam=0;
			for(int i=ilk;i<=son;i++)toplam+=i;
			cout<<"staticFonksiyon("<<ilk<<","<<son<<")="<<toplam<<endl;
		}
		
		void uyeFonksiyon(int ilk,int son){
			int toplam=0;
			for(int i=ilk;i<=son;i++)toplam+=i;
			cout<<"uyeFonksiyon("<<ilk<<","<<son<<")="<<toplam<<endl;
		}	
};

class ToplaFunctor{
	public:
		void operator()(int ilk,int son){
			int toplam=0;
			for(int i=ilk;i<=son;i++)toplam+=i;
			cout<<"toplaFunctor("<<ilk<<","<<son<<")="<<toplam<<endl;
		}
};

void toplaFonksiyon(int ilk,int son){
	int toplam=0;
	for(int i=ilk;i<=son;i++)toplam+=i;
	cout<<"toplaFonksiyon("<<ilk<<","<<son<<")="<<toplam<<endl;
}

int main ()
{
	auto toplaLambda=[](int ilk,int son){
			int toplam=0;
			for(int i=ilk;i<=son;i++)
				toplam+=i;
			cout<<"toplaLambda("<<ilk<<","<<son<<")="<<toplam<<endl;
	};
	
	//thread t1(toplaLambda,1,100);//lambda ifadesi
	//t1.join();
	
	//thread t2(toplaFonksiyon,1,100);//fonksiyon pointer
	//t2.join();
	
	//thread t3(ToplaFunctor(),1,100);//functor
	//t3.join();
	
	//ToplaSinif toplaNesne;
	//thread t4(&ToplaSinif::uyeFonksiyon,&toplaNesne,1,100);//üye fonksiyon
	//t4.join();
	
	//thread t5(&ToplaSinif::staticFonksiyon,1,100);//static fonksiyon
	//t5.join();
	
	return 0;
}
