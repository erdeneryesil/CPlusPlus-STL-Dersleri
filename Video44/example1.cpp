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
	
	shared_ptr<Nokta> sPtr1(new Nokta(11,22,33));
	shared_ptr<Nokta> sPtr11=sPtr1;
	shared_ptr<Nokta> sPtr111=sPtr1;

	shared_ptr<Nokta> sPtr2=make_shared<Nokta>(44,55,66);//c++14	
	shared_ptr<Nokta> sPtr22=sPtr2;
	shared_ptr<Nokta> sPtr222=sPtr2;

	sPtr1->bilgiVer();
	sPtr11->bilgiVer();
	sPtr111->bilgiVer();

	sPtr2->bilgiVer();
	sPtr22->bilgiVer();
	sPtr222->bilgiVer();

	return 0;
}
