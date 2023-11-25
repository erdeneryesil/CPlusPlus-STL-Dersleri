#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//count_if

	vector<int> v{11,22,33,33,44,55,66,66,33};

	int kacAdet=count_if(v.begin(),v.end(),[](int x){return x%33==0;});	//5
	cout<<kacAdet<<endl;

	kacAdet=count_if(v.begin(),v.end(),[](int x){return x%10==0;});		//0
	cout<<kacAdet<<endl;

	//#include<execution>
	//kacAdet=count_if(execution::par,v.begin(),v.end(),[](int x){return x%10==0;});	//0
	
	return 0;
}
