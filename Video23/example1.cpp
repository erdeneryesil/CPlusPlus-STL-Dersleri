#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
	
	unordered_set<string> us{"a","bb","ccc","dddd","eeeeee"};
	

	for(string i:us){
		cout<<i<<endl;
	}
		
	return 0;
}

