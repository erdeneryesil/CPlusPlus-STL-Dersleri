#include<iostream>
#include<optional>
#include<vector>
//using namespace std;

int main(){
	
	std::optional<std::vector<int>> ov{std::in_place, {11,22,33,44} };
	
	std::cout<<ov.value()[1]<<std::endl;
	
	return 0;
}
