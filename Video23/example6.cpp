#include<iostream>
#include<unordered_set>
using namespace std;


struct YeniHash {
	size_t operator()(const int & i) const {
		return i%10;	
	}
};

int main(){
	
	unordered_set<int> s{1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,19};
	
	for(int i:s){
		cout<<i<<"\t- \t"<<s.bucket(i)<<endl;
	}
		
	return 0;
}
