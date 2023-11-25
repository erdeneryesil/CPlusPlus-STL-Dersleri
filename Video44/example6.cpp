#include <iostream>
#include <memory>

using namespace std;

int main(){
	
	shared_ptr<int> sPtr1=make_shared<int>(11);
	cout<<sPtr1.unique()<<endl;//true sPtr1 sadece kendisi işaret ediyor

	shared_ptr<int> sPtr2=sPtr1;
	cout<<sPtr1.unique()<<endl;//false sPtr1 ve sPtr2 birlikte işaret ediyor

	sPtr2.reset();
	cout<<sPtr1.unique()<<endl;//true sPtr1 sadece kendisi işaret ediyor

	return 0;
}
