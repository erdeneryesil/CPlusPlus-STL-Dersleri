#include<iostream>
#include<forward_list>

int main(){

	forward_list<double>fl{1.5, 1.6, 1.7, 2.4, 4.8, 6.3, 6.5, 6.9, 10.5};
	
	for(double i:fl)cout<<i<<",";
	cout<<"\n";

	fl.unique();
	
	for(double i:fl)cout<<i<<",";
	cout<<"\n";

	fl.unique([](double x,double y){return (int)x==(int)y;});

	for(double i:fl)cout<<i<<",";
	cout<<"\n";
	
	return 0;
}
