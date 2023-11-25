#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<int>ms1{22,11,33,11,11,44};			//11,11,11,22,33,44

	multiset<int,greater<int>>ms2{22,11,33,11,11,44};	//44,33,22,11,11,11

	multiset<int>ms3;
	ms3.insert(22);
	ms3.insert(11);
	ms3.insert(33);
	ms3.insert(11);
	ms3.insert(11);
	ms3.insert(44);						//11,11,11,22,33,44

	multiset<int>ms4(ms3.begin(),ms3.end());		//11,11,11,22,33,44

	multiset<int>ms5;
	ms5.insert(ms4.begin(),ms4.end());			//11,11,11,22,33,44
	
	return 0;
}
