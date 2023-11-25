#include <iostream>
#include<algorithm>
#include<random>

using namespace std;

int main(){

	//sample c++17

	vector<int>havuz{5,4,3,2,1};

	vector<int>rasgele(3);
	sample(havuz.begin(),havuz.end(),rasgele.begin(),3,mt19937{random_device{}()});
	
	//vector<int>rasgele(5);
	//sample(havuz.begin(),havuz.end(),rasgele.begin(),5,mt19937{random_device{}()});


	cout<<"rasgele  : ";for(int i:rasgele)cout<<i<<", ";cout<<"\n";
	
 
	return 0;
}
