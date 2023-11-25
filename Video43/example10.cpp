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
	
	unique_ptr<Nokta> uPtr1(new Nokta(11,22,33));
	unique_ptr<Nokta> uPtr2=make_unique<Nokta>(44,55,66);//c++14	

	uPtr1->bilgiVer();
	uPtr2->bilgiVer();

	return 0;
}
