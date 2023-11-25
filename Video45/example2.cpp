#include <iostream>
#include<ratio>

using namespace std;


int main(){

	typedef ratio<1,4> ceyrek;
	typedef ratio<1,2> yarim;
	typedef ratio<3,4> ucCeyrek;
	typedef ratio<1,1> tam;
	typedef ratio<2,1> ikiTam;
	
	cout<<"Çeyrek 		: "<<ceyrek::num<<"/"<<ceyrek::den<<endl;
	cout<<"Yarım 		: "<<yarim::num<<"/"<<yarim::den<<endl;
	cout<<"3 Çeyrek 	: "<<ucCeyrek::num<<"/"<<ucCeyrek::den<<endl;
	cout<<"Tam 		: "<<tam::num<<"/"<<tam::den<<endl;
	cout<<"2 Tam 		: "<<ikiTam::num<<"/"<<ikiTam::den<<endl;
	
	return 0;
}

