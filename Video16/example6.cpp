#include<iostream>
#include<list>

int main(){
	
	list<int>l{22,55,44,88,77,99,11};
	
	l.remove_if(
		[](int i){
			if(i%2==0) return true;
			else return false;
		}
	);
	
	for(int i:l ){
		cout<<i<<endl;
	}
	
	return 0;
}
