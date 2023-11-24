#include<iostream>
using namespace std;
 
template<typename T>
class Sayi{
	T _sayi;
 public:
	Sayi(T sayi):_sayi(sayi){}
	T Kare(){return _sayi*_sayi;}
	T Kup(){return _sayi*_sayi*_sayi;}
};
int main(){
	Sayi<int>s(11);
	cout<<s1.Kare()<<endl;
	cout<<s1.Kup()<<endl;

	Sayi<double>s2(11.99);
	cout<<s2.Kare()<<endl;
	cout<<s2.Kup()<<endl;
		
	return 0;
}
