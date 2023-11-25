#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
using namespace std;

int main(){

	//istreambuf_iterator
	//input iterator
	//stream sonunu ifade edebilmek için "end-of-stream" adında özel bir duruma sahiptir

	istreambuf_iterator<char> son;             //end-of-stream (varsayılan kurucu)
	istreambuf_iterator<char> itr(cin.rdbuf()); 
  	
  	cout << "bir veri giriniz : ";

  	while (itr!=son && *itr!='\n') {
		cout<<*itr<<endl;
		itr++;
	}

	return 0;
}
