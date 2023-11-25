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
		shared_ptr<Nokta> sPtr1=make_shared<Nokta>(11,22,33);//kurucu çalışır
		cout<<sPtr1.use_count()<<endl;//1
		{
			shared_ptr<Nokta> sPtr2=sPtr1;
			cout<<sPtr1.use_count()<<endl;//2
			{
				shared_ptr<Nokta> sPtr3=sPtr1;
				cout<<sPtr1.use_count()<<endl;//3
			}
			cout<<sPtr1.use_count()<<endl;//2 (sPtr3 silindi)
		}
		cout<<sPtr1.use_count()<<endl;//1 (sPtr2 silindi) 
	}
	//sPtr1 silindi. Nesne yıkıcı burada çalışacak

	cout<<"Nokta yıkıcı bu yazıdan önce çalışacak"<<endl;

	return 0;
}
