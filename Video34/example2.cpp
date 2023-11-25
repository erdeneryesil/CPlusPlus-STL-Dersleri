#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

template<typename T>
void fonksiyon(T x){
	using benimVektor = vector<T>;
	using benimIterator = typename vector<T>::iterator;

	benimVektor v{x,x*2,x*3,x*4};
	benimIterator i=v.begin();

	cout<<*i++<<endl;
	cout<<*i++<<endl;
	cout<<*i++<<endl;
	cout<<*i++<<endl;
}

int main(){

	fonksiyon(11.11);	//v{11.11, 22.22, 33.33, 44.44}

	return 0;
}
