#include<iostream>
#include<list>

int main(){

	list<double>l{1.22,2.33,2.88,2,99,5.66,7.55,8.99};

	for(double i:l){
		cout<<i<<",";	
	}
	cout<<"\n";

	l.unique();
	for(double i:l){
		cout<<i<<",";	
	}
	cout<<"\n";

	l.unique([](double x,double y){return (int)x==(int)y;});
	
	for(double i:l){
		cout<<i<<",";	
	}
	cout<<"\n";
	
	return 0;
}
