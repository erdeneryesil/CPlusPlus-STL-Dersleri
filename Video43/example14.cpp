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
	Nokta* ptr1=new Nokta(11,22,33);
	Nokta* ptr2=ptr1;
	Nokta* ptr3=ptr1;
	
	unique_ptr<Nokta> uPtr(ptr1);//ptr1,ptr2,ptr3 ile aynı nesneyi işaret ediyor
	uPtr->bilgiVer();
	ptr1->bilgiVer();
	ptr2->bilgiVer();
	ptr3->bilgiVer();

	//delete ptr1;//HATA! uPtr ile ptr1 aynı nesneyi işaret ediyor, biz silemeyiz

	return 0;
}
