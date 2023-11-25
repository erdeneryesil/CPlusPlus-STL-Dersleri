#include <iostream>
#include <ratio>

using namespace std;

int main(){

	typedef ratio<3,7> ucBoluYedi;
	
	cout<<ucBoluYedi::num<<endl;	//3
	cout<<ucBoluYedi::den<<endl;	//7
	
	return 0;
}
