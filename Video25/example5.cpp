#include<iostream>
#include<unordered_set>
using namespace std;

int main(){

	unordered_multiset<double> s{1.11, 2.22, 3.33, 2.22, 1.11, 11.11};
	
	for(double i:s){
		cout<<i<<"\t- \t"<<s.bucket(i)<<endl;
	}

	return 0;
}
