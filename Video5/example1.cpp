#include<iostream>
using namespace std;

int main(){

	pair<int,char>p1;
	p1=make_pair(11,'X');
	
	pair<double,string>p2;
	p2.first=22.33;	
	p2.second="XXX";

	pair<bool,float>p3(true,44.55f);
	
	cout<<p1.first<<" "<<p1.second<<endl;
	cout<<p2.first<<" "<<p2.second<<endl;
	cout<<p3.first<<" "<<p3.second<<endl;
	
	return 0;
}
