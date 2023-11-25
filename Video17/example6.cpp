#include<iostream>
#include<list>

int main(){

	list<double>l1{1.11,2.77,2.88,3.33,4.55};
	list<double>l2{2.44,3.11,5.66,7.88};
	
	l1.merge(l2);

	for(double i:l1){
		cout<<i<<",";
	}
	cout<<"\n";

	l2.push_back(2.11);
	
	l1.merge(l2,[](double x,double y){return (int)x<(int)y;});

	for(double i:l1){
		cout<<i<<",";
	}
	cout<<"\n";
	cout<<l2.size()<<endl;
	
	return 0;
}
