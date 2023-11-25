#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<double,greater<double>>ms{2.2,5.5};	//5.5,2.2
	
	ms.emplace(3.3);				//5.5,3.3,2.2

	ms.emplace(2.2);				//5.5, 3.3, 2.2, 2.2

	ms.emplace(3.3);				//5.5, 3.3, 3.3, 2.2, 2.2
	
	return 0;
}
