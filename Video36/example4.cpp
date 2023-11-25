#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//for_each

	vector<int> v{10,20,30,40,50};

	for_each(v.begin(),v.end(),[](int x){cout<<++x<<endl;});
	//arttırılan değerlerin kopyasıdır, v içerisindeki veriler değişmez

	//#include<execution>
	//for_each(execution::par,v.begin(),v.end(),[](int x){cout<<++x<<endl;});

	return 0;
}
