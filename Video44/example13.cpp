#include <iostream>
#include <memory>

using namespace std;

class Nokta{
		int _x,_y,_z;
	public:
		Nokta(int x,int y,int z):_x(x),_y(y),_z(z){/*cout<<"Nokta kurucu"<<endl;*/}
		~Nokta(){/*cout<<"Nokta yıkıcı"<<endl;*/}
		void bilgiVer(){cout<<"X:"<<this->_x<<" Y:"<<this->_y<<" Z:"<<this->_z<<endl;}
};

int main(){

	shared_ptr<Nokta> sPtr1=make_shared<Nokta>(11,22,33);
	shared_ptr<Nokta> sPtr2=sPtr1;
	shared_ptr<Nokta> sPtr3=sPtr2;//aynı nesneye 3 shared_ptr işaret ediyor

	weak_ptr<Nokta> wPtr1=sPtr1; 
	weak_ptr<Nokta> wPtr2=sPtr1; 
	weak_ptr<Nokta> wPtr3=sPtr1; 
	weak_ptr<Nokta> wPtr4=sPtr1;
	weak_ptr<Nokta> wPtr5=sPtr1;//aynı nesneye 5 weak_ptr işaret ediyor

	cout<<sPtr1.use_count()<<endl;//3 işaret eden shared_ptr sayısı
	cout<<wPtr1.use_count()<<endl;//3 işaret eden shared_ptr sayısı

	return 0;
}
