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
	
	{	
		unique_ptr<Nokta> uPtr(new Nokta(11,22,33));
	}

	cout<<"Bu yazıdan önce nesne silinmiş olmalı"<<endl;

	return 0;
}
