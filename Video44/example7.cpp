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

void NoktaOku(shared_ptr<Nokta> p){//değer parametre
	p->bilgiVer();
}


int main(){

	shared_ptr<Nokta> sPtr=make_shared<Nokta>(11,22,33);

	NoktaOku(sPtr);//unique_ptr olsa idi NoktaOku(move(sPtr)) olmalıydı

	return 0;
}
