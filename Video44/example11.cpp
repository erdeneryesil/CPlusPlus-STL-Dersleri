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

	shared_ptr<Nokta> sPtr=make_shared<Nokta>(11,22,33);
	
	weak_ptr<Nokta> wPtr=sPtr; //wPtr ve sPtr aynı nesneyi işaret ediyor
	
	if(wPtr.expired())
		cout<<"wPtr geçerli değil"<<endl;
	else 
		cout<<"wPtr geçerli"<<endl;

	sPtr.reset();//artık wPtr.expired(), true döndürür

	if(wPtr.expired())
		cout<<"wPtr geçerli değil"<<endl;
	else 
		cout<<"wPtr geçerli"<<endl;

	return 0;
}
