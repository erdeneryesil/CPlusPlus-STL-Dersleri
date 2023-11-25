#include<iostream>
#include<set>
using namespace std;

int main(){
	
	set<double,greater<double>>s{2.2,5.5};	//5.5,2.2
	
	s.insert(3.3);				//5.5,3.3,2.2

	s.emplace(2.2);				//eklenmez
	s.emplace(4.4);				//5.5,4.4,3.3,2.2
	
	return 0;
}
