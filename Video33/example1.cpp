#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
#include<list>
using namespace std;

int main(){

	//reverse_iterator
	
	vector<int> v{11,22,33,44,55};

	reverse_iterator<vector<int>::iterator> baslangicItr(v.end());
	reverse_iterator<vector<int>::iterator> bitisItr(v.begin());	
	
	while(baslangicItr!=bitisItr){	
		cout<<*baslangicItr<<endl;
		baslangicItr++;	
	}

	return 0;
}
