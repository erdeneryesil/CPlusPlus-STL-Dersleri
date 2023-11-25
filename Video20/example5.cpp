#include<iostream>
#include<set>
using namespace std;

int main(){
	
	multiset<int> ms{22,11,44,55,22,11,22,44,33};	//11,11,22,22,22,33,44,44,55

	ms.erase(22);					//11,11,33,44,44,55

	//ms.erase(ms.begin(),ms.end());		//

	multiset<int>::iterator itr=ms.begin();		//*itr=11
	ms.erase(itr);					//11,33,44,44,55

	multiset<int>::iterator itr1=ms.begin(),itr2=ms.begin();
	advance(itr2,3);				//*itr2=44 (ikinci 44)

	ms.erase(itr1,itr2);				//44,55		
	
	ms.erase(ms.begin(),ms.find(47));		//
	
	return 0;
}
