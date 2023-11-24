#include<iostream>
#include<vector>
#include<algorithm>

int main(){

	std::vector<int>v{33,11,55,44,22,66};
	int sonuc=std::count_if(v.begin(),v.end(),[](int i){return i%2;});
	std::cout<<sonuc<<std::endl;

	return 0;
}
