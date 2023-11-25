#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
using namespace std;

int main(){

	//istream_iterator
	//input iterator
	//stream sonunu ifade edebilmek için "end-of-stream" adında özel bir duruma sahiptir

	string s1,s2,s3;
  	cout << "3 tane metin giriniz: \n";

	istream_iterator<string> son;		//end-of-stream (varsayılan kurucu)
  	istream_iterator<string> itr(cin);  

	if(itr!=son)s1=*itr;					
	itr++;	
					
	if(itr!=son)s2=*itr;
	itr++;

	if(itr!=son)s3=*itr;

  	cout << s1 << " " << s2 << " " << s3 << endl;

	return 0;
}
