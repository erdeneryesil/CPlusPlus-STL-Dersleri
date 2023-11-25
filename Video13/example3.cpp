#include<iostream>
#include<vector>

int main(){
	
	std::vector<int>v;
	
	v.push_back(22);		//22
	v.push_back(55);		//22,55
	v.push_back(11);		//22,55,11
	
	v.insert(v.begin(),66);		//66,22,55,11
	v.insert(v.begin()+1,88);	//66,88,22,55,11
	v.insert(v.begin()+3,44);	//66,88,22,44,55,11
	
	v.emplace(v.begin(),77);	//77,66,88,22,44,55,11
	v.emplace(v.begin()+4,99);	//77,66,88,22,99,44,55,11
	
	v.emplace_back(222);		//77,66,88,22,99,44,55,11,222

	v.pop_back();			//77,66,88,22,99,44,55,11
	v.pop_back();			//77,66,88,22,99,44,55
	
	v.erase(v.begin());		//66,88,22,99,44,55
	v.erase(v.begin()+3);		//66,88,22,44,55

	v.clear();			//
		
	return 0;
}
