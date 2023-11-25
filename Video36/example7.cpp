#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//find_if

	vector<int> v{10,20,30,40,20,50};

	vector<int>::iterator itr;
	
	itr=find_if(v.begin(),v.end(),[](int x){return x%20==0;});		
	cout<<*itr<<endl;		//20
	itr++;
	cout<<*itr<<endl;		//30


	itr=find_if(v.begin(),v.end(),[](int x){return x%22==0;});	//end()
	cout<<*itr<<endl;

	//#include<execution>
	//itr=find_if(execution::par,v.begin(),v.end(),[](int x){return x%20==0;});

	return 0;
}
