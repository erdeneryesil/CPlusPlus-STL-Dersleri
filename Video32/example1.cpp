#include<iostream>
#include<algorithm>
#include<iterator>
#include<array>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

int main(){

	array<int,5> a{55,11,33,22,44};

	array<int,5>::iterator itr;
	itr=&a[2];

	cout<< itr <<endl;
	cout<< *itr <<endl;

	itr=&a[0];
	while(itr<&a[5]){
		cout<<"veri:"<<*itr<<" adres:"<<itr<<endl;
		itr++;	
	}

	return 0;
}

