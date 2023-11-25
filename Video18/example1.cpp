#include<iostream>
#include<forward_list>

int main(){

	forward_list<double>fl;
	
	fl.assign(5,99.7);
	for(double i:fl)
		cout<<i<<endl;

	//cout<<fl.size()<<endl;	//size() YOK
	cout<<distance(fl.begin(),fl.end())<<endl;

	fl.resize(10);
	cout<<distance(fl.begin(),fl.end())<<endl;
	
	for(double i:fl)
		cout<<i<<endl;

	cout<<fl.max_size()<<endl;

	cout<<fl.empty()<<endl;
	fl.clear();
	cout<<fl.empty()<<endl;
	
	return 0;
}
