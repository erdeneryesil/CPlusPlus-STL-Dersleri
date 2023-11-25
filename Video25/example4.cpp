#include<iostream>
#include<unordered_set>
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

	//unordered_multiset<Nokta> us;
	//unordered_multiset<Nokta,hash<Nokta>,equal_to<Nokta>>us;

	unordered_multiset<Nokta,HashNokta,EqualToNokta>us{{1,2,3},{3,2,1},{4,5,6},{1,2,3}};
	HashNokta hasher=us.hash_function();

	for(Nokta i:us){
		cout<<i.okuX()<<i.okuY()<<i.okuZ()<<"\t: "<<hasher(i)<<endl;
	}

	return 0;
}
