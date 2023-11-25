#include <iostream>
#include <memory>

using namespace std;

class Nokta{
		int _x,_y,_z;
	public:
		Nokta(int x,int y,int z):_x(x),_y(y),_z(z){cout<<"Nokta kurucu"<<endl;}
		~Nokta(){cout<<"Nokta yıkıcı"<<endl;}
		void bilgiVer(){cout<<"X:"<<this->_x<<" Y:"<<this->_y<<" Z:"<<this->_z<<endl;}
};

int main(){

	shared_ptr<Nokta> sPtr1=make_shared<Nokta>(11,22,33);
	shared_ptr<Nokta> sPtr2=sPtr1;

	weak_ptr<Nokta> wPtr1=sPtr1; 
	weak_ptr<Nokta> wPtr2=sPtr1; 
	weak_ptr<Nokta> wPtr3=sPtr1; 
	//nesneye 2 adet shared_ptr, 3 adet weak_ptr işaret ediyor

	sPtr2.reset();//nesneye 1 adet shared_ptr, 3 adet weak_ptr işaret ediyor

	sPtr1.reset();//nesneye işaret eden shared_ptr kalmadı. yıkıcı çalışır

	cout<<"Yıkıcı bu yazıdan önce çalışmış olmalı"<<endl;

	return 0;
}
