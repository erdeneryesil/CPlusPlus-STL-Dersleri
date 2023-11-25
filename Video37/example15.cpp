#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//fill

	vector<int> v(10);  //0,0,0,0,0,0,0,0,0,0
	
	fill(v.begin(),v.begin()+5,11); //11,11,11,11,11,0,0,0,0,0,	
	fill(v.begin()+2,v.end(),99);	//11,11,99,99,99,99,99,99,99,99

	cout<<"v : ";for(int i:v)cout<<i<<", ";cout<<"\n";

	//#include<execution>
	//fill(execution::par,v.begin()+2,v.end(),99);

	return 0;
}
