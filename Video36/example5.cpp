#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	//for_each_n c++17

	vector<int> v{10,20,30,40,50};

	for_each_n(v.begin(),5,[](int x){cout<<++x<<endl;});
	//arttırılan değerlerin kopyasıdır, v içerisindeki veriler değişmez

	//#include<execution>
	//for_each_n(execution::par,v.begin(),5,[](int x){cout<<++x<<endl;});

	return 0;
}
