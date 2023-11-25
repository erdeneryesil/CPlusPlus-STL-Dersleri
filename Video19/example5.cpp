#include<iostream>
#include<set>
using namespace std;

int main(){
	
	set<int> s{55,44,99,11,33,44,88,66,77,44,11,55,22};	//11,22,33,44,55,66,77,88,99
	
	s.erase(22);				//11,33,44,55,66,77,88,99
	
	//s.erase(s.begin,s.end());

	set<int>::iterator itr1=s.begin(), itr2=s.begin();
	advance(itr1,1);			//*itr1=33
	advance(itr2,4);			//*itr2=66

	s.erase(itr1,itr2);			//11,66,77,88,99

	s.erase(s.begin(),s.find(77));		//77,88,99	
	
	s.erase(s.begin(),s.find(70));		//
	
	return 0;
}
