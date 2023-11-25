#include<iostream>
#include<unordered_map>
using namespace std;

class Nokta{
		int _x;
		int _y;
		int _z;
	public:
		Nokta(int x,int y,int z):_x(x),_y(y),_z(z){}
		int okuX()const {return this->_x;}
		int okuY()const{return this->_y;}
		int okuZ()const{return this->_z;}		
};

struct EqualToNokta{
	bool operator()(const Nokta n1, const Nokta n2)const{
		if(n1.okuX()==n2.okuX() && n1.okuY()==n2.okuY() && n1.okuZ()==n2.okuZ())return true;
		else return false;
	}
};

struct HashNokta{
	size_t operator()(const Nokta& n) const {
		return n.okuX()+n.okuY()+n.okuZ();	
	}
};

int main(){

	unordered_map<Nokta,char,HashNokta,EqualToNokta> m{{Nokta(0,0,0),'a'},{Nokta(1,0,1),'b'}};
	m[Nokta(2,0,0)]='c';
	m[Nokta(3,0,0)]='d';

	HashNokta h=m.hash_function();
	
	for(pair<Nokta,char>i:m){
		Nokta n=i.first;
		cout<<n.okuX()<<","<<n.okuY()<<","<<n.okuZ()<<"\t"<<i.second<<"\t"<<h(i.first)<<endl;
	}

	return 0;
}
