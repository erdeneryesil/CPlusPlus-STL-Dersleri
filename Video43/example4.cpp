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

	int* ptr1=new int(11);
	int* ptr2=new int[5]{11,22,33,44,55};
	Nokta* ptr3=new Nokta(11,22,33);

	delete ptr1;
	delete[] ptr2;
	delete ptr3;

	int x=11;
	int* ptr4=&x;

	//delete ptr4;//HATA. x normal bir değişken. "delete" kullanmak için "new" ile oluşturulmalı

	return 0;
}
