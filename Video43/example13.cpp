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
	unique_ptr<Nokta> uPtr1=make_unique<Nokta>(11,22,33);

	//unique_ptr<Nokta> uPtr2(uPtr1);//HATA! kopyalayıcı kurucuya izin verilmez
	//unique_ptr<Nokta> uPtr3=uPtr1;//HATA! kopya atamaya izin verilmez

	unique_ptr<Nokta> uPtr4=move(uPtr1);//artık objeyi işaret eden uPtr4
	uPtr4->bilgiVer();
		
	//uPtr1->bilgiVer();//artık uPtr1 üzerinden ulaşamayız
	
	//delete uPtr4;	//HATA! unique_ptr nesnelerini biz silemeyiz.
	//delete uPtr1;//HATA! uPtr1 artık bir nesneyi işaret etmese bile biz silemeyiz

	return 0;
}
