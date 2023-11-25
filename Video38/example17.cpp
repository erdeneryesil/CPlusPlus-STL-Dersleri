#include<iostream>
#include<algorithm>
#include<random>

using namespace std;

int main(){
    
	//sample c++17

    vector<int>havuz{1,2,3,4,5,6,7,8,9};
	vector<int>rasgele3(3);
	vector<int>rasgele5(5);
	vector<int>rasgele9(9);
	vector<int>rasgele15(15);

	auto itr3=sample(havuz.begin(),havuz.end(),rasgele3.begin(),3,mt19937{random_device{}()});
	auto itr5=sample(havuz.begin(),havuz.end(),rasgele5.begin(),5,mt19937{random_device{}()});
	auto itr9=sample(havuz.begin(),havuz.end(),rasgele9.begin(),9,mt19937{random_device{}()});
	auto itr15=sample(havuz.begin(),havuz.end(),rasgele15.begin(),15,mt19937{random_device{}()});

	cout<<"rasgele3  : ";for(int i:rasgele3)cout<<i<<", ";cout<<"\n";
	cout<<"rasgele3 eklenen son eleman : "<<*(--itr3)<<endl;
		
	cout<<"rasgele5  : ";for(int i:rasgele5)cout<<i<<", ";cout<<"\n";
	cout<<"rasgele5 eklenen son eleman : "<<*(--itr5)<<endl;

	cout<<"rasgele9  : ";for(int i:rasgele9)cout<<i<<", ";cout<<"\n";
	cout<<"rasgele9 eklenen son eleman : "<<*(--itr9)<<endl;

	cout<<"rasgele15 : ";for(int i:rasgele15)cout<<i<<", ";cout<<"\n";
	cout<<"rasgele15 eklenen son eleman : "<<*(--itr15)<<endl;	
  
	return 0;
}
