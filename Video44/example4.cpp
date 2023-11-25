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
	cout<<sPtr1.use_count()<<endl;//2
	cout<<sPtr2.use_count()<<endl;//2
	
	shared_ptr<Nokta> sPtr3=sPtr2;
	cout<<sPtr1.use_count()<<endl;//3
	cout<<sPtr2.use_count()<<endl;//3
	cout<<sPtr3.use_count()<<endl;//3

	sPtr3.reset();
	//sPtr3=nullptr;
	cout<<sPtr1.use_count()<<endl;//2

	//sPtr2.reset();
	sPtr2=nullptr;
	cout<<sPtr1.use_count()<<endl;//1

	sPtr1.reset();//Nesneyi işaret eden hiçbir shared_ptr kalmadı. Nokta yıkıcı çalışacak

	cout<<"Nokta yıkıcı bu yazıdan önce çalışacak"<<endl;

	return 0;
}
