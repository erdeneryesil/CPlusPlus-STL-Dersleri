#include <iostream>
using namespace std;

class Nokta{
		int _x,_y,_z;
	public:
		Nokta(int x,int y,int z):_x(x),_y(y),_z(z){/*cout<<"Nokta kurucu"<<endl;*/}
		~Nokta(){/*cout<<"Nokta yıkıcı"<<endl;*/}
		void bilgiVer(){cout<<"X:"<<this->_x<<" Y:"<<this->_y<<" Z:"<<this->_z<<endl;}
};

int main(){

	Nokta n1(11,22,33);
	n1.bilgiVer();

	Nokta* ptr=&n1;
	ptr->bilgiVer();

	Nokta*ptrN=new Nokta(44,55,66);
	ptrN->bilgiVer();

	delete ptrN;

	return 0;
}
