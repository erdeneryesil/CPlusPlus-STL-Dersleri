#include<iostream>
#include<algorithm>
#include<iterator>
#include<array>
#include<vector>
#include<list>
#include<forward_list>
using namespace std;

int main(){

	//end()

	vector<int> v{11,33,22,44 };

	vector<int>::iterator itr;
	
	itr=v.end();		
	cout<<*itr<<endl;	//?

	itr--;			//44
	cout<<*itr<<endl;

	*itr=99;		//11,33,22,99
	cout<<*itr<<endl;
	
	itr-=3;
	cout<<*itr<<endl;	//11
	
	cout<<"---\n";
	for(auto i=v.begin();i!=v.end();i++){
		cout<<*i<<endl;
	}

	return 0;
}

