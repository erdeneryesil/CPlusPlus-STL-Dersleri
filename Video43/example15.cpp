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

unique_ptr<Nokta> NoktaPtrOlustur(int x,int y,int z){
	return make_unique<Nokta>(x,y,z);
}

void NoktaOkuRef(unique_ptr<Nokta> &p){//referans parametre
	p->bilgiVer();
}

void NoktaOkuVal(unique_ptr<Nokta> p){//değer parametre. artık nesnenin sahibi bu fonksiyon
	p->bilgiVer();
}//nesne burada yok edildi


int main(){

	unique_ptr<Nokta> uPtr=NoktaPtrOlustur(11,22,33);

	NoktaOkuRef(uPtr);
	NoktaOkuVal(move(uPtr));//sahiplik NoktaOku fonksiyonuna geçti

	//uPtr->bilgiVer();//uPtr üzerinden erişemeyiz artık

	return 0;
}
